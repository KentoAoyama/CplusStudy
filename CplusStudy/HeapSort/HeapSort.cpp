#include <iostream>
#include <vector>

using namespace std;

void Sort(vector<int>& vec, int index1, int count) {
	int index2 = index1 * 2 + 1;
	int index3 = index1 * 2 + 2;

	//左の子の要素が配列の要素外だったら戻る
	if (index2 > count);

	//右の子の要素が配列の要素外か判定
	if (index3 > count) {
		//子の要素と親の要素を比較
		if (vec[index2] > vec[index1]) {
			swap(vec[index1], vec[index2]);
			Sort(vec, index2, count);
		}
	}
	else {
		//子の要素同士でどちらが大きいか比較
		if (vec[index2] > vec[index3]) {
			//子の要素と親の要素を比較
			if (vec[index2] > vec[index1]) {
				swap(vec[index1], vec[index2]);
				Sort(vec, index2, count);
			}
		}
		else {
			//子の要素と親の要素を比較
			if (vec[index3] > vec[index1]) {
				swap(vec[index1], vec[index3]);
				Sort(vec, index3, count);
			}
		}
	}
}

int main() {
	vector<int> nums = { 3, 5, 1, 2, 7, 4 };
	int sortCount = 0;
	int count = 1;

	for (int i = 0; i < nums.size(); i++) {
		//比較を開始する最大のインデックス
		int checkIndex = nums.size() - i - 1;
		int maxIndex = nums.size() - count;
		Sort(nums, checkIndex, maxIndex);
	}
	count++;


	for (auto n : nums) {
		cout << n << endl;
	}
}