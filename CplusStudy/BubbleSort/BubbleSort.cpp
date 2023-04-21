#include <iostream>

using namespace std;

int main() {
	int array[] = { 2, 1, 3, 5, 4, 6 };

	for (int i = 0; i < sizeof(array) / sizeof(int) - 1; i++) {
		for (int j = i + 1; j < sizeof(array) / sizeof(int); j++) {
			if (array[i] < array[j]) continue;

			swap(array[i], array[j]);
			//int a = array[i];
			//array[i] = array[j];
			//array[j] = a;
		}
	}

	for (int k = 0; k < sizeof(array) / sizeof(int); k++)
	{
		cout << array[k] << endl;
	}
}