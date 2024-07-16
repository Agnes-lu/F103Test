#include "general_cal.h"

int CAL_GetTime()
{
    return HAL_GetTick();
}

int CAL_Delay(int count)
{
    return HAL_Delay(count);
}