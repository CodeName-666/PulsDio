/*
 * DioWPD.h
 *
 *  Created on: 13.01.2018
 *      Author: AP02
 */

#ifndef DIOWPD_H_
#define DIOWPD_H_

#include "Dio.h"
#include "Puls/Puls.h"


class PulsDio : public Dio, public Puls
{
   public:

   /**
    * @brief Dio
    * @param dio
    * @param mode
    * @param pulsRef
    * @param trigger
    */
   PulsDio(Dio_t dio, Mode_t mode = DIO_AS_INPUT_WITH_PULLUP, Level_t dio_init_level = DIO_LOW, PulsType_e pulsType = PULS_NO_PULS,  uint32_t timeoutTime = 0, uint32_t debounceTime = 0);


   virtual ~PulsDio();

   /**
    * @brief loopForPulsDetection
    */
   void loop(void);

};

#endif /* 05_PERIPERIAL_DIO_DIOWPD_H_ */
