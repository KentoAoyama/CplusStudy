#include <iostream>

using namespace std;

int main() {
	int array[] = { 2, 1, 3, 5, 4, 6 };

	for (int i = 0; i < sizeof(array) / sizeof(int) - 1; i++) {
		int numIndex = i;
		for (int j = i + 1; j < sizeof(array) / sizeof(int); j++) {
			if (array[numIndex] > array[j]) {
				numIndex = j;
			}
		}

		if (numIndex != i)
			swap(array[i], array[numIndex]);
	}

	for (int k = 0; k < sizeof(array) / sizeof(int); k++)
	{
		cout << array[k] << endl;
	}
}