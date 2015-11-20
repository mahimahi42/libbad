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
 * @brief      A nicer function to print a DATA value.
 *
 * @param      d     A DATA value
 */
#define data_print(d) data_fprint(stdout, (d))

#define data_fprintf_int(d, fmt) fprintf(out, (fmt), (d).val.data_int)
#define data_fprintf_dbl(d, fmt) fprintf(out, (fmt), (d).val.data_dbl)
#define data_fprintf_ptr(d, fmt) fprintf(out, (fmt), (d).val.data_ptr)
#define data_fprintf_str(d, fmt) fprintf(out, (fmt), (char*) (d).val.data_ptr)

void data_fprint(FILE*, DATA);

#endif
