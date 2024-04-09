#include <gui/screen2_screen/Screen2View.hpp>
#include "stm32f4xx_hal.h"
Screen2View::Screen2View()
{

}

void Screen2View::setupScreen()
{
    Screen2ViewBase::setupScreen();
}

void Screen2View::tearDownScreen()
{
    Screen2ViewBase::tearDownScreen();
}

void Screen2View::led()
{
   HAL_GPIO_TogglePin(GPIOG, GPIO_PIN_13);
}
