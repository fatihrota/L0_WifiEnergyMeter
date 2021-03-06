/******************************************************************************
 *
 *   Copyright (C) Rota Teknik 2020 All Rights Reserved. Confidential
 *
 **************************************************************************//**
 * @file        conf.h
 * @brief       Configuration header file.
 *
 *
 * @author		LeventK
 * @date		2017-11-06
 *
 * @ingroup     vts
 * @{
 *****************************************************************************/

/*============================================================================*/
/* Includes                                                                   */
/*============================================================================*/
#ifndef CONF_H_
#define CONF_H_

#include "conf_board.h"

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
/* Declarations                                                               */
/*============================================================================*/

/**
 * @brief Save configuration into FLASH
 */
void conf_save();

/**
 * @brief Reload configuration
 */
void conf_reload();

/**
 * @brief Initialze FLASH and load configuration
 */
void conf_init();

#endif /* CONF_H_ */
/**@}*/
/******************************************************************************/
/*   Copyright (C) Rota Teknik 2020,  All Rights Reserved. Confidential.      */
/******************************************************************************/
