#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int num;
	cin >> num;
	vector<string> data(num);

	for (int i = 0; i < num; i++) {
		string a;
		cin >> a;
		data[i] = a;
	}

	string k;
	cin >> k;
	int index = distance(data.begin(), find(data.begin(), data.end(), k));
	cout << index + 1;
}