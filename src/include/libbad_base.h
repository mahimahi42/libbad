/**
 * @file      include/libbad_base.h
 * @author    Bryce Davis
 * @date      19 November 2015
 * @brief     Header file for internal libbad declarations
 * @copyright Copyright (c) 2015, Bryce Davis. Released under the MIT License.
 *            See LICENSE.txt for details.
 */
#ifndef _LIBBAD_BASE_H
#define _LIBBAD_BASE_H

/**
 * @typedef A convenience typedef for long long ints.
 */
typedef long long int llint;
/**
 * @typedef A convenience typedef for long doubles.
 */
typedef long double ldouble;

/**
 * @union DATA
 * @brief A data value for libbad data structures.
 *
 * A DATA can hold either a long long int, a long double, or a pointer. Takes
 * up 16 bytes.
 */
typedef union libbad_data_t {
    llint data_int;
    ldouble data_dbl;
    void* data_ptr;
} DATA;

#endif
