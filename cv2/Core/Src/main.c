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

int main(void)
{
	 RCC->AHBENR |= RCC_AHBENR_GPIOAEN ; // enable
	 GPIOA->MODER |= GPIO_MODER_MODER5_0; // LED1 = PA0, output

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
	while (1)
	{
		GPIOA->ODR ^= (1<<5); // toggle
		for (volatile uint32_t i = 0; i < 100000; i++) {} ;
	}
}
