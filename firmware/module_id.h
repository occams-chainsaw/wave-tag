/**
 * @file module_id.h
 *
 * @author Jason W Haensly <jason.haensly@gmail.com> 26 Jan 2014
 *
 * @copyright Copyright (c) 2014 Blinc Labs LLC
 * @copyright This software is licensed under the terms and conditions of the
 * MIT License. See LICENSE.md in the root directory for more information.
 *
 * Define unique ids for each module in the system. Valid values range
 * from 0x00 - 0x0f.
 *
 */

#ifndef MODULE_ID_H_
#define MODULE_ID_H_


/**
 *
 */
enum module_id_t {
    MODULE_ID_INVALID       = 0x00, ///< Reserved
    MODULE_ID_APP           = 0x01, ///< WaveTag application
    MODULE_ID_TIMER         = 0x02, ///< Timer
    MODULE_ID_ACCEL         = 0x03, ///< Accelerometer
    MODULE_ID_ADC           = 0x04, ///< ADC
};


/**
 *
 */
enum error_t {
    /// No error. In fact, success!
    ERR_NONE                = 0x00,

    /// Invalid application mode
    ERR_APP_INVALID_MODE    = 0x00 | MODULE_ID_APP,

    /// NULL callback
    ERR_TIMER_INVALID_PARAM = 0x00 | MODULE_ID_TIMER,
    /// All timers currently in use
    ERR_TIMER_BUSY          = 0x10 | MODULE_ID_TIMER,
    /// NULL timer
    ERR_TIMER_STOPPED       = 0x20 | MODULE_ID_TIMER,

    /// Invalid argument
    ERR_ACCEL_INVALID_ARG   = 0x00 | MODULE_ID_ACCEL,

    // Invalid argument
    ERR_ADC_INVALID_ARG     = 0x00 | MODULE_ID_ADC,
    /// ADC measurement in progress
    ERR_ADC_BUSY            = 0x01 | MODULE_ID_ADC,
    /// ADC not enabled
    ERR_ADC_STOPPED         = 0x02 | MODULE_ID_ADC,
};


#endif // MODULE_ID_H_
