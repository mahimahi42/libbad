/**
 * @file 	  linkedlist.c
 * @author 	  Bryce Davis
 * @date      19 November 2015
 * @brief     Implementation file for doubly-linked list.
 * @copyright Copyright (c) 2015, Bryce Davis. Released under the MIT License.
 *            See LICENSE.txt for details.
 */
#include "linkedlist.h"

void llist_init(lb_llist* list)
{
	list->head = NULL;
	list->tail = NULL;
	list->length = 0;
}