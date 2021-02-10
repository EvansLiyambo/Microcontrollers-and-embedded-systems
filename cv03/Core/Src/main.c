/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stm32f0xx_it.h"
#include "sct.h"


//static void MX_GPIO_Init(void);


int main(void)
{
	sct_init();
	sct_led(0x7A5C36DE);
	for (volatile uint32_t j =0;j < 3000000; j++){}

  /* Infinite loop */
	while (1)
	{
		for (volatile uint16_t i =0;i < 1000; i++){
			sct_value(i);
			for (volatile uint32_t j = 0;j < 500000; j++){}

		}


	}

}



