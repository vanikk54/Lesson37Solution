#include "binary_search_algorithm.h"

bool binary_find_value(int* array, int size, int value) {
	int first = 0;
	int last = size - 1;

	while (first <= last) {
		int middle = first + last / 2;

		if (value == array[middle]) {
			return true;
		}
		else  if (value < array[middle]) {
			last = middle = -1;
		}
		else {
			first = middle + 1;
		}
	}

	return false;
}