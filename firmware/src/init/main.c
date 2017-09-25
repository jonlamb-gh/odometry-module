/**
 * @file main.c
 * @brief Main.
 *
 */

#include "stm32f7xx_hal.h"

#include "FreeRTOS.h"
#include "task.h"

#include "config.h"
#include "debug.h"
#include "platform.h"
//#include "led.h"
//#include "system.h"

int main(void)
{
    debug_init();

    platform_init();

    //(void) SysTick_Config(SystemCoreClock / 1000);

    //system_start();

    vTaskStartScheduler();

    // should never get here
    //led_set_all(true);
    while(1);

    return 0;
}
