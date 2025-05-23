#include "fonts.h"

// 
//  Font data for Impact 8pt
// 

// Character bitmaps for Impact 8pt
const uint8_t impact_8ptBitmaps[] = 
{
	// @0 '!' (2 pixels wide)
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   

	// @12 '"' (5 pixels wide)
	0x00, //      
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      

	// @24 '#' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x24, //   #  #
	0x24, //   #  #
	0xFC, // ######
	0x48, //  #  # 
	0x48, //  #  # 
	0xFC, // ######
	0x90, // #  #  
	0x90, // #  #  
	0x00, //       
	0x00, //       

	// @36 '$' (5 pixels wide)
	0x20, //   #  
	0x70, //  ### 
	0xD8, // ## ##
	0xD8, // ## ##
	0xF0, // #### 
	0x78, //  ####
	0x38, //   ###
	0xD8, // ## ##
	0xD8, // ## ##
	0x70, //  ### 
	0x20, //   #  
	0x00, //      

	// @48 '%' (8 pixels wide)
	0x00, //         
	0xE4, // ###  #  
	0xA4, // # #  #  
	0xA8, // # # #   
	0xA8, // # # #   
	0xEF, // ### ####
	0x15, //    # # #
	0x15, //    # # #
	0x25, //   #  # #
	0x27, //   #  ###
	0x00, //         
	0x00, //         

	// @60 '&' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x70, //  ###  
	0xD8, // ## ## 
	0xF8, // ##### 
	0x70, //  ###  
	0xDC, // ## ###
	0xDC, // ## ###
	0x7C, //  #####
	0x00, //       
	0x00, //       

	// @72 ''' (2 pixels wide)
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   

	// @84 '(' (3 pixels wide)
	0x00, //    
	0xE0, // ###
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xE0, // ###
	0x00, //    
	0x00, //    

	// @96 ')' (3 pixels wide)
	0x00, //    
	0xE0, // ###
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0xE0, // ###
	0x00, //    
	0x00, //    

	// @108 '*' (3 pixels wide)
	0x00, //    
	0xE0, // ###
	0xA0, // # #
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    

	// @120 '+' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0x20, //   #  
	0x20, //   #  
	0xF8, // #####
	0x20, //   #  
	0x20, //   #  
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      

	// @132 ',' (2 pixels wide)
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0x80, // # 
	0x00, //   

	// @144 '-' (3 pixels wide)
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0xE0, // ###
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    

	// @156 '.' (2 pixels wide)
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   

	// @168 '/' (3 pixels wide)
	0x00, //    
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0xE0, // ###
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0x00, //    
	0x00, //    

	// @180 '0' (5 pixels wide)
	0x00, //      
	0x70, //  ### 
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0x70, //  ### 
	0x00, //      
	0x00, //      

	// @192 '1' (3 pixels wide)
	0x00, //    
	0x20, //   #
	0xE0, // ###
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x00, //    
	0x00, //    

	// @204 '2' (5 pixels wide)
	0x00, //      
	0x70, //  ### 
	0xD8, // ## ##
	0xD8, // ## ##
	0x18, //    ##
	0x30, //   ## 
	0x30, //   ## 
	0x60, //  ##  
	0x60, //  ##  
	0xF8, // #####
	0x00, //      
	0x00, //      

	// @216 '3' (5 pixels wide)
	0x00, //      
	0x70, //  ### 
	0xD8, // ## ##
	0xD8, // ## ##
	0x18, //    ##
	0x30, //   ## 
	0x18, //    ##
	0xD8, // ## ##
	0xD8, // ## ##
	0x70, //  ### 
	0x00, //      
	0x00, //      

	// @228 '4' (5 pixels wide)
	0x00, //      
	0x70, //  ### 
	0x70, //  ### 
	0x70, //  ### 
	0xB0, // # ## 
	0xB0, // # ## 
	0xF8, // #####
	0xF8, // #####
	0x30, //   ## 
	0x30, //   ## 
	0x00, //      
	0x00, //      

	// @240 '5' (5 pixels wide)
	0x00, //      
	0xF8, // #####
	0xC0, // ##   
	0xF8, // #####
	0xD8, // ## ##
	0x18, //    ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0x70, //  ### 
	0x00, //      
	0x00, //      

	// @252 '6' (5 pixels wide)
	0x00, //      
	0x70, //  ### 
	0xD8, // ## ##
	0xC0, // ##   
	0xF8, // #####
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0x70, //  ### 
	0x00, //      
	0x00, //      

	// @264 '7' (3 pixels wide)
	0x00, //    
	0xE0, // ###
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x40, //  # 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0x00, //    
	0x00, //    

	// @276 '8' (5 pixels wide)
	0x00, //      
	0x70, //  ### 
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0x70, //  ### 
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0x70, //  ### 
	0x00, //      
	0x00, //      

	// @288 '9' (5 pixels wide)
	0x00, //      
	0x70, //  ### 
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xF8, // #####
	0x18, //    ##
	0xD8, // ## ##
	0x70, //  ### 
	0x00, //      
	0x00, //      

	// @300 ':' (2 pixels wide)
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   

	// @312 ';' (2 pixels wide)
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0x80, // # 
	0x00, //   

	// @324 '<' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x0C, //     ##
	0x70, //  ###  
	0x80, // #     
	0x70, //  ###  
	0x0C, //     ##
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       

	// @336 '=' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0xFC, // ######
	0x00, //       
	0xFC, // ######
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       

	// @348 '>' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0xC0, // ##    
	0x38, //   ### 
	0x04, //      #
	0x38, //   ### 
	0xC0, // ##    
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       

	// @360 '?' (6 pixels wide)
	0x00, //       
	0x78, //  #### 
	0xCC, // ##  ##
	0xCC, // ##  ##
	0x0C, //     ##
	0xCC, // ##  ##
	0xF8, // ##### 
	0x00, //       
	0xC0, // ##    
	0xC0, // ##    
	0x00, //       
	0x00, //       

	// @372 '@' (9 pixels wide)
	0x00, 0x00, //          
	0x1E, 0x00, //    ####  
	0x61, 0x00, //  ##    # 
	0x5E, 0x80, //  # #### #
	0xB6, 0x80, // # ## ## #
	0xA4, 0x80, // # #  #  #
	0xA4, 0x80, // # #  #  #
	0xA5, 0x00, // # #  # # 
	0x5E, 0x00, //  # ####  
	0x61, 0x80, //  ##    ##
	0x1E, 0x00, //    ####  
	0x00, 0x00, //          

	// @396 'A' (5 pixels wide)
	0x00, //      
	0xF8, // #####
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xF8, // #####
	0xD8, // ## ##
	0xD8, // ## ##
	0x00, //      
	0x00, //      

	// @408 'B' (5 pixels wide)
	0x00, //      
	0xF0, // #### 
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xF0, // #### 
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xF8, // #####
	0x00, //      
	0x00, //      

	// @420 'C' (5 pixels wide)
	0x00, //      
	0x70, //  ### 
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xC0, // ##   
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0x70, //  ### 
	0x00, //      
	0x00, //      

	// @432 'D' (5 pixels wide)
	0x00, //      
	0xF0, // #### 
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xF8, // #####
	0x00, //      
	0x00, //      

	// @444 'E' (4 pixels wide)
	0x00, //     
	0xF0, // ####
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xF0, // ####
	0xC0, // ##  
	0xC0, // ##  
	0xC0, // ##  
	0xF0, // ####
	0x00, //     
	0x00, //     

	// @456 'F' (3 pixels wide)
	0x00, //    
	0xE0, // ###
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xE0, // ###
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0x00, //    
	0x00, //    

	// @468 'G' (5 pixels wide)
	0x00, //      
	0x70, //  ### 
	0xD8, // ## ##
	0xD8, // ## ##
	0xC0, // ##   
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0x68, //  ## #
	0x00, //      
	0x00, //      

	// @480 'H' (5 pixels wide)
	0x00, //      
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xF8, // #####
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0x00, //      
	0x00, //      

	// @492 'I' (2 pixels wide)
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   

	// @504 'J' (3 pixels wide)
	0x00, //    
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0xE0, // ###
	0x00, //    
	0x00, //    

	// @516 'K' (5 pixels wide)
	0x00, //      
	0xD8, // ## ##
	0xD8, // ## ##
	0xF0, // #### 
	0xF0, // #### 
	0xF0, // #### 
	0xF0, // #### 
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0x00, //      
	0x00, //      

	// @528 'L' (3 pixels wide)
	0x00, //    
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xE0, // ###
	0x00, //    
	0x00, //    

	// @540 'M' (7 pixels wide)
	0x00, //        
	0xEE, // ### ###
	0xEE, // ### ###
	0xEE, // ### ###
	0xF6, // #### ##
	0xD6, // ## # ##
	0xD6, // ## # ##
	0xD6, // ## # ##
	0xD6, // ## # ##
	0xD6, // ## # ##
	0x00, //        
	0x00, //        

	// @552 'N' (5 pixels wide)
	0x00, //      
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xF8, // #####
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0x00, //      
	0x00, //      

	// @564 'O' (5 pixels wide)
	0x00, //      
	0x70, //  ### 
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0x70, //  ### 
	0x00, //      
	0x00, //      

	// @576 'P' (5 pixels wide)
	0x00, //      
	0xF8, // #####
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xF8, // #####
	0xC0, // ##   
	0xC0, // ##   
	0xC0, // ##   
	0xC0, // ##   
	0x00, //      
	0x00, //      

	// @588 'Q' (5 pixels wide)
	0x00, //      
	0x70, //  ### 
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0x70, //  ### 
	0x38, //   ###
	0x00, //      

	// @600 'R' (5 pixels wide)
	0x00, //      
	0xF0, // #### 
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xF0, // #### 
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0x00, //      
	0x00, //      

	// @612 'S' (5 pixels wide)
	0x00, //      
	0x70, //  ### 
	0xD8, // ## ##
	0xD8, // ## ##
	0xC0, // ##   
	0x78, //  ####
	0x18, //    ##
	0xD8, // ## ##
	0xD8, // ## ##
	0x70, //  ### 
	0x00, //      
	0x00, //      

	// @624 'T' (4 pixels wide)
	0x00, //     
	0xF0, // ####
	0x60, //  ## 
	0x60, //  ## 
	0x60, //  ## 
	0x60, //  ## 
	0x60, //  ## 
	0x60, //  ## 
	0x60, //  ## 
	0x60, //  ## 
	0x00, //     
	0x00, //     

	// @636 'U' (5 pixels wide)
	0x00, //      
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0x70, //  ### 
	0x00, //      
	0x00, //      

	// @648 'V' (5 pixels wide)
	0x00, //      
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0x70, //  ### 
	0x70, //  ### 
	0x00, //      
	0x00, //      

	// @660 'W' (10 pixels wide)
	0x00, 0x00, //           
	0xC9, 0x80, // ##  #  ## 
	0xC9, 0x80, // ##  #  ## 
	0xDD, 0x80, // ## ### ## 
	0x55, 0xC0, //  # # # ###
	0x55, 0xC0, //  # # # ###
	0x55, 0xC0, //  # # # ###
	0x55, 0xC0, //  # # # ###
	0x77, 0xC0, //  ### #####
	0x77, 0xC0, //  ### #####
	0x00, 0x00, //           
	0x00, 0x00, //           

	// @684 'X' (5 pixels wide)
	0x00, //      
	0xD8, // ## ##
	0xD8, // ## ##
	0x50, //  # # 
	0x70, //  ### 
	0x70, //  ### 
	0x50, //  # # 
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0x00, //      
	0x00, //      

	// @696 'Y' (6 pixels wide)
	0x00, //       
	0xCC, // ##  ##
	0x48, //  #  # 
	0x48, //  #  # 
	0x48, //  #  # 
	0x30, //   ##  
	0x30, //   ##  
	0x30, //   ##  
	0x30, //   ##  
	0x30, //   ##  
	0x00, //       
	0x00, //       

	// @708 'Z' (3 pixels wide)
	0x00, //    
	0xE0, // ###
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xE0, // ###
	0x00, //    
	0x00, //    

	// @720 '[' (3 pixels wide)
	0x00, //    
	0xE0, // ###
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xE0, // ###
	0x00, //    
	0x00, //    

	// @732 '\' (4 pixels wide)
	0x00, //     
	0xC0, // ##  
	0xC0, // ##  
	0x60, //  ## 
	0x60, //  ## 
	0x60, //  ## 
	0x60, //  ## 
	0x60, //  ## 
	0x30, //   ##
	0x30, //   ##
	0x00, //     
	0x00, //     

	// @744 ']' (3 pixels wide)
	0x00, //    
	0xE0, // ###
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0xE0, // ###
	0x00, //    
	0x00, //    

	// @756 '^' (5 pixels wide)
	0x00, //      
	0x20, //   #  
	0x50, //  # # 
	0x50, //  # # 
	0x50, //  # # 
	0x88, // #   #
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      

	// @768 '_' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0xFC, // ######
	0x00, //       

	// @780 '`' (3 pixels wide)
	0xC0, // ## 
	0x60, //  ##
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    

	// @792 'a' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0x70, //  ### 
	0xD8, // ## ##
	0xD8, // ## ##
	0x78, //  ####
	0xD8, // ## ##
	0xD8, // ## ##
	0xF8, // #####
	0x00, //      
	0x00, //      

	// @804 'b' (5 pixels wide)
	0x00, //      
	0xC0, // ##   
	0xC0, // ##   
	0xF8, // #####
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xF8, // #####
	0x00, //      
	0x00, //      

	// @816 'c' (4 pixels wide)
	0x00, //     
	0x00, //     
	0x00, //     
	0x60, //  ## 
	0xD0, // ## #
	0xD0, // ## #
	0xC0, // ##  
	0xD0, // ## #
	0xD0, // ## #
	0x60, //  ## 
	0x00, //     
	0x00, //     

	// @828 'd' (5 pixels wide)
	0x00, //      
	0x18, //    ##
	0x18, //    ##
	0xF8, // #####
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xF8, // #####
	0x00, //      
	0x00, //      

	// @840 'e' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0x70, //  ### 
	0xD8, // ## ##
	0xD8, // ## ##
	0xF8, // #####
	0xC0, // ##   
	0xD8, // ## ##
	0x70, //  ### 
	0x00, //      
	0x00, //      

	// @852 'f' (3 pixels wide)
	0x00, //    
	0xE0, // ###
	0xC0, // ## 
	0xE0, // ###
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0x00, //    
	0x00, //    

	// @864 'g' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0xF8, // #####
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xF8, // #####
	0x18, //    ##
	0xD8, // ## ##
	0x70, //  ### 
	0x00, //      

	// @876 'h' (5 pixels wide)
	0x00, //      
	0xC0, // ##   
	0xC0, // ##   
	0xF8, // #####
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0x00, //      
	0x00, //      

	// @888 'i' (2 pixels wide)
	0x00, //   
	0xC0, // ##
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   

	// @900 'j' (3 pixels wide)
	0x00, //    
	0x60, //  ##
	0x00, //    
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0x60, //  ##
	0xE0, // ###
	0x00, //    

	// @912 'k' (5 pixels wide)
	0x00, //      
	0xC0, // ##   
	0xC0, // ##   
	0xD8, // ## ##
	0xD0, // ## # 
	0xF0, // #### 
	0xF0, // #### 
	0xD0, // ## # 
	0xD0, // ## # 
	0xD0, // ## # 
	0x00, //      
	0x00, //      

	// @924 'l' (2 pixels wide)
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   

	// @936 'm' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0xFE, // #######
	0xD6, // ## # ##
	0xD6, // ## # ##
	0xD6, // ## # ##
	0xD6, // ## # ##
	0xD6, // ## # ##
	0xD6, // ## # ##
	0x00, //        
	0x00, //        

	// @948 'n' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0xF8, // #####
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0x00, //      
	0x00, //      

	// @960 'o' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0x70, //  ### 
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0x70, //  ### 
	0x00, //      
	0x00, //      

	// @972 'p' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0xF8, // #####
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xF8, // #####
	0xC0, // ##   
	0x00, //      

	// @984 'q' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0xF8, // #####
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xF8, // #####
	0x18, //    ##
	0x00, //      

	// @996 'r' (3 pixels wide)
	0x00, //    
	0x00, //    
	0x00, //    
	0xE0, // ###
	0xE0, // ###
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0x00, //    
	0x00, //    

	// @1008 's' (4 pixels wide)
	0x00, //     
	0x00, //     
	0x00, //     
	0xF0, // ####
	0xB0, // # ##
	0xC0, // ##  
	0x70, //  ###
	0x30, //   ##
	0xD0, // ## #
	0xF0, // ####
	0x00, //     
	0x00, //     

	// @1020 't' (3 pixels wide)
	0x00, //    
	0x00, //    
	0xC0, // ## 
	0xE0, // ###
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xC0, // ## 
	0xE0, // ###
	0x00, //    
	0x00, //    

	// @1032 'u' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xF8, // #####
	0x00, //      
	0x00, //      

	// @1044 'v' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0xD8, // ## ##
	0x50, //  # # 
	0x50, //  # # 
	0x70, //  ### 
	0x00, //      
	0x00, //      

	// @1056 'w' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0xD6, // ## # ##
	0xD6, // ## # ##
	0xD6, // ## # ##
	0x74, //  ### # 
	0x74, //  ### # 
	0x6C, //  ## ## 
	0x6C, //  ## ## 
	0x00, //        
	0x00, //        

	// @1068 'x' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0xD8, // ## ##
	0xD8, // ## ##
	0x50, //  # # 
	0x70, //  ### 
	0x50, //  # # 
	0xD8, // ## ##
	0xD8, // ## ##
	0x00, //      
	0x00, //      

	// @1080 'y' (4 pixels wide)
	0x00, //     
	0x00, //     
	0x00, //     
	0xD0, // ## #
	0xD0, // ## #
	0xD0, // ## #
	0x60, //  ## 
	0x60, //  ## 
	0x60, //  ## 
	0x60, //  ## 
	0x60, //  ## 
	0x00, //     

	// @1092 'z' (3 pixels wide)
	0x00, //    
	0x00, //    
	0x00, //    
	0xE0, // ###
	0x60, //  ##
	0x60, //  ##
	0xE0, // ###
	0xC0, // ## 
	0xC0, // ## 
	0xE0, // ###
	0x00, //    
	0x00, //    

	// @1104 '{' (3 pixels wide)
	0x00, //    
	0x60, //  ##
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x80, // #  
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x60, //  ##

	// @1116 '|' (1 pixels wide)
	0x00, //  
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x00, //  

	// @1128 '}' (3 pixels wide)
	0x00, //    
	0xC0, // ## 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x20, //   #
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0x40, //  # 
	0xC0, // ## 

	// @1140 '~' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x64, //  ##  #
	0x98, // #  ## 
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
};

// Character descriptors for Impact 8pt
// { [Char width in bits], [Offset into impact_8ptCharBitmaps in bytes] }


// Font information for Impact 8pt
sFONT Impact = {
  impact_8ptBitmaps,
  5, /* Width */
  8, /* Height */
};
