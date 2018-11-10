/*
 * adc.h
 *
 *  Created on: Sep 22, 2018
 *      Author: MagdyA4
 */


#ifndef ADC_H_
#define ADC_H_

#include "micro_config.h"
#include "std_types.h"
#include "common_macros.h"

/** External Variables **/

/* Extern Public global variables to be used by other modules */
extern volatile uint16 g_adcResult;

/**** Function ProtoTypes ****/

/*
 * Description :
 * Function responsible for initialize the ADC driver.
 */
void ADC_init(void);

/*
 * Description :
 * Function responsible for read analog data from a certain ADC channel
 * and convert it to digital using the ADC driver.
 */
void ADC_readChannel(uint8 channel_num);

#endif /* ADC_H_ */
