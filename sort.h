#ifndef _SORT_H_
#define _SORT_H_

#include <stddef.h>
#include <stdbool.h>

void print_array(const int *array, size_t size);
/*void print_list(const listint_t *list);*/
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

#endif
