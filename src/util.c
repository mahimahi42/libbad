/**
 * @file 	  util.c
 * @author 	  Bryce Davis
 * @date      19 November 2015
 * @brief     Header file for internal libbad declarations
 * @copyright Copyright (c) 2015, Bryce Davis. Released under the MIT License.
 *            See LICENSE.txt for details.
 */

#include <stdio.h>

#include "util.h"

/**
 * @brief      Print an integer from a DATA
 *
 * @param      out   a pointer to the output file
 * @param      data  a DATA value
 */
void data_fprint_int(FILE* out, DATA data)
{
	fprintf(out, "%lld", data.val.data_int);
}

/**
 * @brief      Print a double from a DATA
 *
 * @param      out   a pointer to the output file
 * @param      data  a DATA value
 */
void data_fprint_dbl(FILE* out, DATA data)
{
	fprintf(out, "%Lf", data.val.data_dbl);
}

/**
 * @brief      Print a pointer from a DATA
 *
 * @param      out   a pointer to the output file
 * @param      data  a DATA value
 */
void data_fprint_ptr(FILE* out, DATA data)
{
	fprintf(out, "%p", data.val.data_ptr);
}

/**
 * @brief      Print a pointer from a DATA as a string
 *
 * @param      out   a pointer to the output file
 * @param      data  a DATA value
 */
void data_fprint_str(FILE* out, DATA data)
{
	fprintf(out, "%s", (char*) data.val.data_ptr);
}
