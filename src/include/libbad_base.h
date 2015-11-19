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
 * A convenience typedef for long long ints.
 */
typedef long long int llint;
/**
 * A convenience typedef for long doubles.
 */
typedef long double ldouble;

/**
 * @union libbad_data_t
 * @brief A data value for libbad data structures.
 *
 * An instance of libbad_data_t can hold either a long long int, a long double, 
 * or a pointer. Takes up 16 bytes.
 */
union libbad_data_t {
    llint data_int;		/**< A long long integer value (8 bytes) */
    ldouble data_dbl;	/**< A long double value (16 bytes) */
    void* data_ptr;		/**< A pointer value (8 bytes) */
};

/**
 * Use DATA instead of "union libbad_data_t"
 */
typedef union libbad_data_t DATA;

#endif
