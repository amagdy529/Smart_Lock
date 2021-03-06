/*
 * smart_lock_MC1.c
 *
 *  Created on: Oct 21, 2018
 *      Author: MagdyA4
 */


#include "lcd.h"
#include "keypad.h"
#include "uart.h"
#include "password_driver.h"


int main(void)
{

	/**************************        Device Drivers Initialization  *********************************/
	UART_init();
	LCD_init();
	LCD_clearScreen(); /* clear LCD at the beginning */


	/***************************          Variables                    ******************************/
	uint8 key;
	//uint8 password_size;
	uint8 first_password_arr[password_size];
	uint8 confirm_password_arr[password_size];
	uint8 first_time_flag = 0 ;
	uint8 compare_fail_flag = 0 ;
	uint8 user_choise;


	LCD_displayStringRowColumn(0,0,"Enter your");
	LCD_displayStringRowColumn(1,0,"Password");
//	LCD_displayStringRowColumn(2,0,"LCD");
	LCD_goToRowColumn(3,0);


    while(1)
    {



		UART_sendByte(key); //send the pressed key to the second MC using uart
		_delay_ms(500); //sleep 500ms


    }
}
