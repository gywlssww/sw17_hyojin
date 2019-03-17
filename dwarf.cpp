#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int nums[9] = { 0 };
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> nums[i];
		sum += nums[i];
	}
	sort(nums,nums + 9);
	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sum-nums[i]-nums[j]== 100) {
				for (int k = 0; k< 9; k++) {
					if (k != i &&k != j)
						cout << nums[k] << endl;
				}return 0;
			}
		}
	}
}
