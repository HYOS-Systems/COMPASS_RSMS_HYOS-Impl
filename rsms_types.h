/*
 * rsms_types.h
 *
 *  Created on: Jun 16, 2021
 *      Author: Bayram
 */

#pragma once
#include "OSUserInclude.h"

typedef struct {
#ifdef __STM32_SPI_PERIPHERAL
	SPI_HandleTypeDef *hspi_t;
	GPIOPair chipSelect_t;
	SPI_HandleTypeDef *hspi_p;
	GPIOPair chipSelect_p;
#endif
#ifdef __STM32_UART_PERIPHERAL
	UART_HandleTypeDef *serialDebug;
#endif
#ifdef __STM32_CAN_PERIPHERAL
	CAN_HandleTypeDef *busIFC;
#endif
#ifdef __STM32_TIM_PERIPHERAL
	TIM_HandleTypeDef *htim;
	Timer pTim;
	Timer tTim;
	Timer canStatusTim;
	Timer canDataTim;
#endif
	GPIOPair LD1;
	GPIOPair LD2;
	GPIOPair LD3;
	GPIOPair LD4;
	GPIOPair UTIL1;
	GPIOPair UTIL2;
	GPIOPair UTIL3;
	GPIOPair UTIL4;
} RSMS_PeripheralStruct;


