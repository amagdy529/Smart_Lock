/*
 * motor.c
 *
 *  Created on: Sep 22, 2018
 *      Author: MagdyA4
 */

#include "motor.h"


/****  Functions Definitions  ****/

/** Interrupt Initialization for Motor **/


/*
 * Function to Initialize Motor High and Low Bits
 * Parameters: low,bit, high_bit
 * Return : None
 *
 * */
void Motor_Init(uint8 low_bit, uint8 high_Bit){
	SET_BIT(Motor_PORT_DDR,low_bit); // set PB1 as output pin for Motor to go to IN1 pin
	SET_BIT(Motor_PORT_DDR,high_Bit); // set PB2 as output pin for Motor
}


/*
 * function to initialzie timer 0 with interrupt
 * for the motor to work in order to control the speed
 * of the motor
 * parameters : duty_cycle
 * return: none
 * */
void Motor_PWM_Timer0_Init(unsigned char set_duty_cycle){

	TCNT0 = 0; //initial timer value

	OCR0  = set_duty_cycle;

	Motor_PORT_DDR  = Motor_PORT_DDR | (1<<PB3); //set OC0 as output pin --> pin where the PWM signal is generated from MC.

	/* Configure timer control register
	 * 1. Fast PWM mode FOC0=0
	 * 2. Fast PWM Mode WGM01=1 & WGM00=1
	 * 3. Clear OC0 when match occurs (non inverted mode) COM00=0 & COM01=1
	 * 4. clock = F_CPU/8 CS00=0 CS01=1 CS02=0
	 */
	TCCR0 = (1<<WGM00) | (1<<WGM01) | (1<<COM01) | (1<<CS01);
}

/*
 * this function is to stop the motor
 * parameters : low bit , high bit
 * return : none
 *
 * */
void Motor_Stop(uint8 low_bit, uint8 high_Bit){
	CLEAR_BIT(Motor_PORT,low_bit);
	CLEAR_BIT(Motor_PORT,high_Bit);
}

/*
 * this function is to rotate the motor clock wise
 * (to the right)
 * parameters : low_bit , higg_bit
 * return : none
 *
 * */
void Motor_Rotate_Right(uint8 low_bit, uint8 high_Bit){
	CLEAR_BIT(Motor_PORT,low_bit);
	SET_BIT(Motor_PORT,high_Bit);
}


/*
 * this function is to rotate the motor Anti clock wise
 * (to the left)
 * parameters : low_bit , higg_bit
 * return : none
 *
 * */
void Motor_Rotate_Left(uint8 low_bit, uint8 high_Bit){
	SET_BIT(Motor_PORT,low_bit);
	CLEAR_BIT(Motor_PORT,high_Bit);
}
