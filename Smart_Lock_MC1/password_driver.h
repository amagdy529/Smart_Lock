/*
 * password_driver.h
 *
 *
 *      Author: MagdyA4
 */

#ifndef PASSWORD_DRIVER_H_
#define PASSWORD_DRIVER_H_

#include "std_types.h"
#include "micro_config.h"
#include "common_macros.h"
#include "keypad.h"

/*******************************************************************************
 *                      Preprocessor Macros                                    *
 *******************************************************************************/

#define password_size 6 // the password original size is 5 but we add 1 char in order to be sent in uart
#define Btn_sleep 500 //amount of time for a btn to sleep after clicking the btn in ms





/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

void store_password_in_arr(uint8 arr[],uint8 arr_size);
uint8 compare_passwords(uint8 arr1[], uint8 arr2[] ,uint8 arr_size);

#endif /* PASSWORD_DRIVER_H_ */
