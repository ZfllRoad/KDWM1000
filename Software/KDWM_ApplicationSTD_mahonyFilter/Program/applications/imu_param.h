/* #include "applications\imu_param.h" */

#ifndef __IMU_PARAM_H
#define __IMU_PARAM_H

#include "modules\imu.h"
/*====================================================================================================*/
/*====================================================================================================*/
void   IMU_ParamClearSector( void );
int8_t IMU_ParamWrite( IMU_DataTypeDef *pIMU );
int8_t IMU_ParamRead( IMU_DataTypeDef *pIMU );
/*====================================================================================================*/
/*====================================================================================================*/
#endif
