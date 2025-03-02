#include "util.h"
#include "linear_search_algoriths.h"
#include "binary_search_algorithm.h"
#define BUF 100

int main() {
	int array[BUF];

	int size;
	cout << "Input size of array: ";
	cin >> size;

	int array[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 13, 20, 30, 35, 36 };
	int size = 15;

	int value;
	cout << "Input find value: ";
	cin >> value;

	init(array, size, -20, 50);
	cout << "Array: " << convert(array, size) << endl;

	string msg = find_value(array, size, value) ? "Yes" : "No";

	cout << "Answer: " << msg << endl;

	cout << "First value index is "
		<< find_first_value_index(array, size, value) << endl;

	cout << "Last value index is "
		<< find_last_value_index(array, size, value) << endl;

	cout << "Count of value is "
		<< count_value(array, size, value) << endl;

	return 0;
}