bool find_value(int* array, int size, int value) {
	for (int i = 0; i < size; i++)
	{
		if (array[i] == value) {
			return true;
		}
	}

	return false;
}