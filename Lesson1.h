/*
 * IncFile1.h
 *
 * Created: 10/26/2021 4:17:42 PM
 *  Author: eliza
 */ 


#ifndef INCFILE1_H_
#define INCFILE1_H_


/*Function Declarations*/
void LCD_Cmd(unsigned char cmd);
void LCD_Char(unsigned char char_data);
void LCD_Init(void);
void LCD_Clear(void);
void LCD_String(char *str);
void LCD_String_xy(char row, char pos, char *str);


#endif /* INCFILE1_H_ */