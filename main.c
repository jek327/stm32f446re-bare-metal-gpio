/**
 * Project : STM32 Bare-Metal GPIO Blinking LED
 * File    : main.c
 * Author  : Vasanthavel Jeeva Kumararaja
 * Date    : July 28, 2026
 *
 * Description:
 * Demonstrates GPIO initialization and LED control using direct register
 * manipulation on the STM32F446RE without using the STM32 HAL GPIO API.
 *
 * GitHub:
 * https://github.com/jek327
/* Includes ------------------------------------------------------------------*/
#include "main.h"


int main(void)
{

  /* USER CODE BEGIN 1 */

  // Enables clock register for GPIOA peripheral
  RCC->AHB1ENR |= 0x00000001;

  // Clears I/O direction mode register for bits 10 and 11
  GPIOA->MODER &= ~(0x00000C00);

  // Configures I/O direction mode for Port A
  GPIOA->MODER |= 0x00000400;

  /* USER CODE END 1 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */
	GPIOA->ODR |= 0x00000020;

	for (volatile int i = 0; i < 1000000; i++)
	{}

	GPIOA->ODR &= ~(0x00000020);

	for (volatile int i = 0; i < 1000000; i++)
	{}

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

