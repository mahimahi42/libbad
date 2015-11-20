/**
 * @file 	  linkedlist.c
 * @author 	  Bryce Davis
 * @date      19 November 2015
 * @brief     Implementation file for doubly-linked list.
 * @copyright Copyright (c) 2015, Bryce Davis. Released under the MIT License.
 *            See LICENSE.txt for details.
 */
#include <stdio.h>

#include "linkedlist.h"
#include "util.h"

void llist_init(lb_llist list)
{
	list->head = NULL;
	list->tail = NULL;
	list->length = 0;
}

void llist_print(lb_llist list)
{
	if (list->head == NULL) {
		printf("Empty list\n");
	} else {
		llist_node n = list->head;
		while (n != NULL) {
			data_print_str(n->data);
			puts("");
			n = n->next;
		}
	}
}
