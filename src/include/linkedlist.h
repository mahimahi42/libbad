/**
 * @file      include/linkedlist.h
 * @author    Bryce Davis
 * @date      19 November 2015
 * @brief     Header file for doubly-linked list implementation.
 * @copyright Copyright (c) 2015, Bryce Davis. Released under the MIT License.
 *            See LICENSE.txt for details.
 */
#ifndef _LINKEDLIST_H
#define _LINKEDLIST_H

#include <stddef.h> // size_t, NULL

#include "libbad_base.h"

struct lb_ll_node {
	struct lb_ll_node* prev;
	struct lb_ll_node* next;
	DATA			   data;
};
typedef struct lb_ll_node lb_ll_node;

struct lb_llist {
	lb_ll_node* head;
	lb_ll_node* tail;
	size_t 		length;
};
typedef struct lb_llist lb_llist;

void llist_init(lb_llist*);

#endif
