/*
 * DioWPD.cpp
 *
 *  Created on: 13.01.2018
 *      Author: AP02
 */

#include "PulsDio.h"


PulsDio::~PulsDio()
{
   // TODO Auto-generated destructor stub
    return;
}


PulsDio::PulsDio(Dio_t dio, Mode_t mode, Level_t dio_init_level, PulsType_e pulsType, uint32_t timeoutTime, uint32_t debounceTime) 
                  : Dio(dio, mode), Puls(pulsType,dio_init_level,timeoutTime,debounceTime)
{
   return;
}


void PulsDio::loop(void)
{
   Level_t io =  Dio::get();
   this->checkPuls((uint8_t)io);
   return;
}






