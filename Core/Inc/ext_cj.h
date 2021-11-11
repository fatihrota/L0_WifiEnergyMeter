/******************************************************************************
 *
 *   Copyright (C) Rota Teknik 2019 All Rights Reserved. Confidential
 *
 **************************************************************************//**
 * @file        ext_cj.h
 * @brief       External Cold Junction function prototypes.
 * 				External Cold Junction is used to obtain better measurement for
 * 				temperature. Because internal cold junction is affected from
 * 				internal heat of the box.
 *
 * @author      LeventK
 * @date        2018-07-10
 *
 * @ingroup     vts
 * @{
 *****************************************************************************/

/*============================================================================*/
/* Includes                                                                   */
/*============================================================================*/

#ifndef EXT_CJ_H_
#define EXT_CJ_H_

/*============================================================================*/
/* Forward declarations                                                       */
/*============================================================================*/

/*============================================================================*/
/* Constants and macros                                                       */
/*============================================================================*/

/*============================================================================*/
/* Type definitions                                                           */
/*============================================================================*/

/*============================================================================*/
/* Global data                                                                */
/*============================================================================*/

/*============================================================================*/
/* Module global data                                                         */
/*============================================================================*/

/*============================================================================*/
/* Implementation of functions                                                */
/*============================================================================*/

/**
 * @brief Initialize External Cold Junction Thermal Sensor STS31 chip
 * @return -1 or EXT_THERMAL_COUNT
 */
int EXTCJ_init(void);

/**
 * @brief Read temperature from external thermal sensors
 * @param ch	Channel number
 * @param data	Pointer to the read data
 * @return 0 or error value
 */
int EXTCJ_ReadTemperature(float *data);

#endif /* EXT_CJ_H_ */
/**@}*/
/******************************************************************************/
/*   Copyright (C) Rota Teknik 2019,  All Rights Reserved. Confidential.      */
/******************************************************************************/
