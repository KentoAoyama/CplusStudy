#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int num;
	cin >> num;
	vector<int> vnums;

	for (int i = 0; i < num; i++) {
		int data;
		cin >> data;
		vnums.push_back(data);
	}

	sort(vnums.begin(), vnums.end());

	for (auto n : vnums) {
		cout << n << endl;
	}
}