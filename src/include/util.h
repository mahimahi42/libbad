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
 * @brief      A nicer function to print an integer from a DATA
 *
 * @param      d     A pointer to a DATA
 */
#define data_print_int(d) data_fprint_int(stdin, (d))

void data_fprint_int(FILE*, DATA);

#endif
