# stm32f446re-bare-metal-gpio
Bare-metal GPIO programming on the STM32F446RE using direct register manipulation. Demonstrates peripheral clock configuration, GPIO initialization, and LED control without using STM32 HAL GPIO APIs.

This project demonstrates how to configure and control GPIO on the STM32F446RE using direct register manipulation in C. The onboard LED connected to PA5 is blinked without using STM32 HAL GPIO functions.

Hardware
- STM32 NUCLEO-F446RE
- STM32F446RE MCU

Software
- STM32CubeIDE
- C
- CMSIS

Concepts Demonstrated
- Peripheral clock enabling
- Memory-mapped I/O
- GPIO configuration
- Register manipulation
- Bit masking
- Busy-wait delay

