#include "util.h"
#include "linear_search_algoriths.h"
#define BUF 100

int main() {
	int array[BUF];

	int size;
	cout << "Input size of array: ";
	cin >> size;

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

	return 0;
}