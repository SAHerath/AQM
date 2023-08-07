
#include "el029tc7.h"

EPD_EL029TC7::EPD_EL029TC7(SPIClass &spi, uint8_t cspin, uint8_t dcpin, uint8_t pwrpin, uint8_t bsypin) {
	_cspin = cspin;
	_dcpin = dcpin;
	_pwrpin = pwrpin;
	_bsypin = bsypin;
	_spiPort = &spi;
}


/******************************************************************************
function :	Software reset
parameter:
******************************************************************************/
void EPD_EL029TC7::reset(void) {
    // digitalWrite(EPDRST, HIGH);
    // delay(100);
    digitalWrite(_pwrpin, LOW);
    delay(10);
    digitalWrite(_pwrpin, HIGH);
    delay(100);
}

/******************************************************************************
function :	Wait until the busy_pin goes HIGH
parameter:
******************************************************************************/
uint8_t EPD_EL029TC7::readBusy(void) {
	uint16_t con=5000;
	while(con > 1) {
		if(digitalRead(_bsypin) == 1) {
			return 1;
		}
		delay(50);
		con--;
	}
	return 0;
}

/******************************************************************************
function :	send command
parameter:
     Reg : Command register
******************************************************************************/
void EPD_EL029TC7::writeCommand(uint8_t value) {
	openSpi(_cspin);
	digitalWrite(_dcpin, LOW);
	transferSpi(value);
	closeSpi(_cspin);
}

/******************************************************************************
function :	send data
parameter:
    Data : Write data
******************************************************************************/
void EPD_EL029TC7::writeData(uint8_t value) {
	openSpi(_cspin);
    digitalWrite(_dcpin, HIGH);
    transferSpi(value);
    closeSpi(_cspin);
}

/******************************************************************************
function :	Initialize the ePaper display
parameter:
******************************************************************************/
uint8_t EPD_EL029TC7::begin(void) {
	uint16_t i;
	
	if(!_init) {
		pinMode(_cspin, OUTPUT);
		pinMode(_dcpin, OUTPUT);
		pinMode(_pwrpin, OUTPUT);
		pinMode(_bsypin, INPUT);
		
		digitalWrite(_cspin, HIGH);
		digitalWrite(_dcpin, HIGH);
		
		_init=1;
	}
	
	// epd_reset();
	powerOn();

	writeCommand(PON);
	if(readBusy() == 0) {
		return 0;
	}

	writeCommand(PWR);
	writeData(0x03);
	writeData(0x00);
	writeData(0x2B);
	writeData(0x2B);
	writeData(0x2B);

	writeCommand(PSR);
	writeData(0x9F);

	writeCommand(PFS);
	writeData(0x00);    

	writeCommand(BTST);
	writeData(0x17);
	writeData(0x17);
	writeData(0x17);

	writeCommand(TSE);
	writeData(0x00);

	writeCommand(CDI);
	writeData(0x97);

	writeCommand(TCON);
	writeData(0x22);

	writeCommand(DTM1);
	for(i=0; i<imageSize; i++) {
		writeData(0xFF);
	}

	writeCommand(POF);
	readBusy();
	return 1;
}

/******************************************************************************
function :	Sends the image buffer to display
parameter:
******************************************************************************/
void EPD_EL029TC7::updateDisplay(const uint8_t* image) {
	uint16_t i;
	writeCommand(PON);
	readBusy();

	writeCommand(DTM2);
	for(i=0; i<imageSize; i++) {
		writeData(image[i]);
	}
	writeCommand(DRF);
	readBusy();

	writeCommand(POF);
	readBusy();
}

/******************************************************************************
function :	Clear screen
parameter:
******************************************************************************/
void EPD_EL029TC7::clearDisplay(void) {
	uint16_t i;
	writeCommand(PON);
	readBusy();

	writeCommand(DTM2);
	for(i=0; i<imageSize; i++) {
		writeData(0xFF);
	}
	writeCommand(DRF);
	readBusy();

	writeCommand(POF);
	readBusy();
}


/******************************************************************************
function :	Display power off
parameter:
******************************************************************************/
void EPD_EL029TC7::powerOff(void) {
	delay(100);
    digitalWrite(_pwrpin, LOW);
    
}

/******************************************************************************
function :	Display power on
parameter:
******************************************************************************/
void EPD_EL029TC7::powerOn(void) {
	digitalWrite(_pwrpin, HIGH);
	delay(100);
}

////////////////////////////////////////////////////////////////////////////////////

void EPD_EL029TC7::openSpi(uint8_t cspin) {
  _spiPort->beginTransaction(SPISettings(4000000, MSBFIRST, SPI_MODE0));
  digitalWrite(cspin, LOW);
  delayMicroseconds(1);   // 5ns
}

void EPD_EL029TC7::closeSpi(uint8_t cspin) {
  delayMicroseconds(1);   // 5ns
  digitalWrite(cspin, HIGH);
  _spiPort->endTransaction();
}

void EPD_EL029TC7::transferSpi(uint8_t data) {
  _spiPort->transfer(data);
}