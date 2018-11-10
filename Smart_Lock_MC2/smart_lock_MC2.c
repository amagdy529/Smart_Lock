/*
 * smart_lock_MC2.c
 *
 *  Created on: Oct 21, 2018
 *      Author: MagdyA4
 */

#include "uart.h"
#include "motor.h"

int main(void)
{
	uint8 key;
	UART_init();
	SREG |= (1<<7);/* Enable Global Interrupts */
	Motor_Init(PB0,PB1); /* initize motor , to be more clear it is the interrupt init code (low_bit , high_bit) */


	while(1)
    {
		key = UART_recieveByte(); //receive the pressed key from uart
		if( (key >= 0) && (key <= 9) )
		{
			Motor_Stop(PB0,PB1); // stop motor funcition (low_bit,high_bit)
//			LCD_intgerToString(key); //display the pressed keypad switch
		}
		else
		{
			Motor_Rotate_Right(PB0,PB1); // rotate motor clock wise (low_bit,high_bit)
//			LCD_displayCharacter(key); //display the pressed keypad switch
		}
    }
}