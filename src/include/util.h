/**
 * @file      include/util.h
 * @author    Bryce Davis
 * @date      19 November 2015
 * @brief     Header file for helpful utility functions.
 * @copyright Copyright (c) 2015, Bryce Davis. Released under the MIT License.
 *            See LICENSE.txt for details.
 */
#ifndef _UTIL_H
#define _UTIL_H

#include "libbad_base.h"

/**
 * @brief      A nicer function to print an integer from a DATA.
 *
 * @param      d     A DATA value
 */
#define data_print_int(d) data_fprint_int(stdout, (d))
/**
 * @brief      A nicer function to print a double from a DATA.
 *
 * @param      d     A DATA value
 */
#define data_print_dbl(d) data_fprint_dbl(stdout, (d))
/**
 * @brief      A nicer function to print a pointer from a DATA.
 *
 * @param      d     A DATA value
 */
#define data_print_ptr(d) data_fprint_ptr(stdout, (d))
/**
 * @brief      A nicer function to print a pointer of a DATA as a string.
 *
 * @param      d     A DATA value
 */
#define data_print_str(d) data_fprint_str(stdout, (d))

void data_fprint_int(FILE*, DATA);
void data_fprint_dbl(FILE*, DATA);
void data_fprint_ptr(FILE*, DATA);
void data_fprint_str(FILE*, DATA);

#endif
