void init_param(void)
{
 Lcm_CmdWrite(0x11); 
	   jm_delay_ms(120);				  //Delay 120ms 
   //-----------------------------------ST7789 analog setting------------------------------------//    
	   Lcm_CmdWrite(0xD0);//power control 
	   Lcm_DatWrite(0xa4); 
	   Lcm_DatWrite(0x81); 
   
	   Lcm_CmdWrite(0x3a);
	   Lcm_DatWrite(0x05);
	   
	   Lcm_CmdWrite(0xbb); //VCOM
	   Lcm_DatWrite(0x35); //35 
       
       Lcm_CmdWrite(0x36);	  // Memory Access Control 
//	   Lcm_DatWrite(0x08); 
//	   Lcm_DatWrite(0x60);
       Lcm_DatWrite(0xA0);
   //-------------------------------ST7789 gamma setting----------------------------------------// 
	   Lcm_CmdWrite(0xe0); //Positive gamma
	   Lcm_DatWrite(0xd0); 
	   Lcm_DatWrite(0x00); 
	   Lcm_DatWrite(0x02); 
	   Lcm_DatWrite(0x07); 
	   Lcm_DatWrite(0x0b); 
	   Lcm_DatWrite(0x1a); 
	   Lcm_DatWrite(0x31); 
	   Lcm_DatWrite(0x54); 
	   Lcm_DatWrite(0x40); 
	   Lcm_DatWrite(0x29); 
	   Lcm_DatWrite(0x12); 
	   Lcm_DatWrite(0x12); 
	   Lcm_DatWrite(0x12); 
	   Lcm_DatWrite(0x17);
	   
	   Lcm_CmdWrite(0xe1); //Negative gamma
	   Lcm_DatWrite(0xd0); 
	   Lcm_DatWrite(0x00); 
	   Lcm_DatWrite(0x02); 
	   Lcm_DatWrite(0x07); 
	   Lcm_DatWrite(0x05); 
	   Lcm_DatWrite(0x25); 
	   Lcm_DatWrite(0x2d); 
	   Lcm_DatWrite(0x44); 
	   Lcm_DatWrite(0x45); 
	   Lcm_DatWrite(0x1c); 
	   Lcm_DatWrite(0x18); 
	   Lcm_DatWrite(0x16); 
	   Lcm_DatWrite(0x1c); 
	   Lcm_DatWrite(0x1d); 
   //----------------------------------------------------------------------------------------------------// 
//	   Lcm_CmdWrite(0x29); 
//	   Lcm_CmdWrite(0x2c);
}
