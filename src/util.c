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
 * @brief      Print a DATA value
 *
 * @param      out   a pointer to the output file
 * @param      data  a DATA value
 */
void data_fprint(FILE* out, DATA data)
{
	switch (data.type) {
		case INT:
			data_fprintf_int(data, "%lld");
			break;
		case DBL:
			data_fprintf_dbl(data, "%Lf");
			break;
		case STR:
			data_fprintf_str(data, "%s");
			break;
		default:
			data_fprintf_ptr(data, "%p");
			break;
	}
}
