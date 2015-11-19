/**
 * @file 	  util.c
 * @author 	  Bryce Davis
 * @date      19 November 2015
 * @brief     Header file for internal libbad declarations
 * @copyright Copyright (c) 2015, Bryce Davis. Released under the MIT License.
 *            See LICENSE.txt for details.
 */

#include <stdio.h>

#include "libbad_base.h"

/**
 * @brief      A nicer function to print an integer from a DATA
 *
 * @param      d     A pointer to a DATA
 */
#define data_print_int(d) data_fprint_int(stdin, (d))

/**
 * @brief      Print an integer from a DATA
 *
 * @param      out   a pointer to the output file
 * @param      data  a pointer to a DATA
 */
void data_fprint_int(FILE* out, DATA data)
{
	fprintf(out, "%lld", data.data_int);
}
