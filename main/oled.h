//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//�о�԰����
//���̵�ַ��http://shop73023976.taobao.com/?spm=2013.1.0.0.M4PqC2
//
//  �� �� ��   : main.c
//  �� �� ��   : v2.0
//  ��    ��   : HuangKai
//  ��������   : 2014-0101
//  ����޸�   : 
//  ��������   : OLED 4�ӿ���ʾ����(STMSTM8S103K3ϵ��)
//              ˵��: 
//              ----------------------------------------------------------------
//              GND    ��Դ��
//              VCC  ��5V��3.3v��Դ
//              D0   PC1
//              D1   PC2
//              RES  PC3
//              DC   PC4
//              CS   PC5              
//              ----------------------------------------------------------------
// �޸���ʷ   :
// ��    ��   : 
// ��    ��   : HuangKai
// �޸�����   : �����ļ�
//��Ȩ���У�����ؾ���
//Copyright(C) �о�԰����2014/3/16
//All rights reserved
//******************************************************************************/��

#ifndef __OLED_H
#define __OLED_H			  	 
 //#include "stm8s.h"
#include "driver/gpio.h"
typedef uint8_t  u8;
typedef uint32_t  u32;
#define OLED_CMD  0	//д����
#define OLED_DATA 1	//д����
#define OLED_MODE 0

/****************ʱ��*********************/
// #define OLED_SCLK_PORT  (GPIOC)
// #define OLED_SCLK_PINS  (GPIO_PIN_5)

// /****************����*********************/
// #define OLED_SDIN_PORT  (GPIOC)
// #define OLED_SDIN_PINS  (GPIO_PIN_6)

// /****************��λ*********************/
// #define OLED_RST_PORT  (GPIOC)
// #define OLED_RST_PINS  (GPIO_PIN_3)

// /****************����/����*********************/
// #define OLED_DC_PORT  (GPIOC)
// #define OLED_DC_PINS  (GPIO_PIN_2)

// /****************Ƭѡ*********************/
// #define OLED_CS_PORT  (GPIOC)
// #define OLED_CS_PINS  (GPIO_PIN_1)

#define GPIO_OUTPUT_IO_SCLK 26
#define GPIO_OUTPUT_IO_SDIN 27
#define GPIO_OUTPUT_IO_RST 32
#define GPIO_OUTPUT_IO_DC 33
#define GPIO_OUTPUT_IO_CS 25



#define OLED_SCLK_Clr() gpio_set_level(GPIO_OUTPUT_IO_SCLK, 0)
#define OLED_SCLK_Set() gpio_set_level(GPIO_OUTPUT_IO_SCLK, 1)

#define OLED_SDIN_Clr() gpio_set_level(GPIO_OUTPUT_IO_SDIN, 0)
#define OLED_SDIN_Set() gpio_set_level(GPIO_OUTPUT_IO_SDIN, 1)

#define OLED_RST_Clr() gpio_set_level(GPIO_OUTPUT_IO_RST, 0)
#define OLED_RST_Set() gpio_set_level(GPIO_OUTPUT_IO_RST, 1)


#define OLED_DC_Clr() gpio_set_level(GPIO_OUTPUT_IO_DC, 0)
#define OLED_DC_Set() gpio_set_level(GPIO_OUTPUT_IO_DC, 1)


#define OLED_CS_Clr()  gpio_set_level(GPIO_OUTPUT_IO_CS, 0)
#define OLED_CS_Set()  gpio_set_level(GPIO_OUTPUT_IO_CS, 1)


//OLEDģʽ����
//0:4�ߴ���ģʽ
//1:����8080ģʽ

#define SIZE 16
#define XLevelL		0x02
#define XLevelH		0x10
#define Max_Column	128
#define Max_Row		64
#define	Brightness	0xFF 
#define X_WIDTH 	128
#define Y_WIDTH 	64	    						  
//-----------------OLED�˿ڶ���----------------  					   

//void delay_ms(unsigned int ms);
		     

//OLED�����ú���
void OLED_WR_Byte(u8 dat,u8 cmd);	    
void OLED_Display_On(void);
void OLED_Display_Off(void);	   							   		    
void OLED_Init(void);
void OLED_Clear(void);
void OLED_DrawPoint(u8 x,u8 y,u8 t);
void OLED_Fill(u8 x1,u8 y1,u8 x2,u8 y2,u8 dot);
void OLED_ShowChar(u8 x,u8 y,u8 chr);
void OLED_ShowNum(u8 x,u8 y,u32 num,u8 len,u8 size2);
void OLED_ShowString(u8 x,u8 y, u8 *p);	 
void OLED_Set_Pos(unsigned char x, unsigned char y);
void OLED_ShowCHinese(u8 x,u8 y,u8 no);
void OLED_DrawBMP(unsigned char x0, unsigned char y0,unsigned char x1, unsigned char y1,unsigned char BMP[]);
#endif  
	 



