
#ifndef _EL029TC7_H_
#define _EL029TC7_H_

#include <Arduino.h>
#include <SPI.h>


#ifdef __cplusplus
extern "C" {
#endif

// Display regs
#define PSR         0x00
#define PWR         0x01
#define POF         0x02
#define PFS         0x03
#define PON         0x04
#define BTST        0x06
#define DTM1        0x10
#define DRF         0x12
#define DTM2        0x13
#define TSE         0x41
#define CDI         0x50
#define TCON        0x60
#define CCSET       0xE0
#define TSSET       0xE5

// Display resolution
#define EPD_WIDTH       128
#define EPD_HEIGHT      296

class EPD_EL029TC7
{
	public:
		const uint16_t imageSize = ((EPD_WIDTH % 8 == 0)? (EPD_WIDTH / 8 ): (EPD_WIDTH / 8 + 1)) * EPD_HEIGHT;
		
		EPD_EL029TC7(SPIClass &spi, uint8_t cspin, uint8_t dcpin, uint8_t pwrpin, uint8_t bsypin);
		uint8_t begin(void);
		void reset(void);
		uint8_t readBusy(void);
		void writeCommand(uint8_t value);
		void writeData(uint8_t value);
		void updateDisplay(const uint8_t* image);
		void clearDisplay(void);
		void powerOff(void);
		void powerOn(void);
	
	private:
		uint8_t _init=0;
		uint8_t _cspin;
		uint8_t _dcpin;
		uint8_t _pwrpin;
		uint8_t _bsypin;
		SPIClass *_spiPort = NULL;
		
		void openSpi(uint8_t cspin);
		void closeSpi(uint8_t cspin);
		void transferSpi(uint8_t data);
};

#ifdef __cplusplus
}
#endif

#endif
