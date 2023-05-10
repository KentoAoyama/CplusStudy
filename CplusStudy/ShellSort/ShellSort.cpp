#include <iostream>
#include <vector>

using namespace std;

static void CoutArray(vector<int> array) {
	for (auto n : array) {
		cout << n << " ";
	}
	cout << endl;
}

int main() {
	vector<int> array = { 6, 2, 3, 1, 4, 6, 5, 0, 9 };
	int num = 3;
	CoutArray(array);

	for (int i = 0; i < num; i++) {
		int n = num - i;
		for (int j = 0; j < n; j++) {
			for (int k = j; k < array.size() - n; k += n) {
				for (int l = k + n; l < array.size(); l += n) {
					if (array[k] < array[l]) continue;
					swap(array[k], array[l]);
				}
			}
		}
		CoutArray(array);
	}

	//TODO:普通に出来ていない
}