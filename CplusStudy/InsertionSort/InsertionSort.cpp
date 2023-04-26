#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> nums = { 7, 1, 3, 4, 2 };

	for (int i = 1; i < nums.size(); i++) {
		int count = 0;
		for (int j = i - 1; j >= 0; j--) {
			if (nums[i - count] < nums[j]) {
				swap(nums[i - count], nums[j]);
				count++;
			}
			else {
				break;
			}
		}
	}

	for (auto n : nums) {
		cout << n << endl;
	}
}