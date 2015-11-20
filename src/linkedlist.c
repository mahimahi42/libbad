/**
 * @file 	  linkedlist.c
 * @author 	  Bryce Davis
 * @date      19 November 2015
 * @brief     Implementation file for doubly-linked list.
 * @copyright Copyright (c) 2015, Bryce Davis. Released under the MIT License.
 *            See LICENSE.txt for details.
 */
#include <stdio.h>
#include <stdlib.h> // malloc

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
			data_print(n->data);
			if (n->next != NULL) printf(" -> ");
			n = n->next;
		}
	}
}

void llist_append(lb_llist list, DATA data)
{
	llist_node n = (llist_node) malloc(sizeof(struct lb_ll_node));
	n->prev = NULL;
	n->next = NULL;
	n->data = data;

	if (list->head == NULL) {
		list->head = n;
		list->tail = n;
	} else if (list->length == 1) {
		list->tail = n;
		list->head->next = list->tail;
		list->tail->prev = list->head;
	} else {
		list->tail->next = n;
		llist_node old_tail = list->tail;
		list->tail = n;
		list->tail->prev = old_tail;
	}
	list->length++;
}
