/*
 * Lesson 1-code.c
 *
 * Created: 10/26/2021 3:23:43 PM
 * Author : eliza
 */ 

#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "Lesson1.h"


/*Our main program*/ 
int main(void) { 
	LCD_Init(); /* Initialize LCD */ 
	LCD_String("Lesson1: Hello"); /* Write a string on 1st line of LCD*/ 
	LCD_Cmd(0xC0); /* Go to 2nd line*/ 
	LCD_String("Elizabeth"); /* Write string on 2nd line*/
}


