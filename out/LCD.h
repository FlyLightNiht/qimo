#ifndef __LCD_H__
#define __LCD_H__

#include "LPC11xx.h" 
extern void Delayms(uint16_t ms);
extern void SysTick_Handler(void);
extern uint8_t Busy_Check();
extern void LCD_WriteCommand(uint32_t cmd);
extern void LCD_WriteData(uint32_t dat);
extern uint8_t LCD_DisplayChar(uint8_t x, uint8_t y, uint8_t ch);
extern uint8_t LCD_DisplayStr(uint8_t x, uint8_t y, uint8_t *pStr);
extern void LCD_IOInit(void);
extern void InitLCD();


#endif
