#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int input,sum=0;
	cin >> input;
	int* nums = new int[input];

	for (int i = 0; i < input; i++) {
		cin >> nums[i];
	}
	sort(nums,nums+input);
	for (int j = 0; j < input; j++) {
		sum += nums[j] * (input - j);
	}
	
	cout << sum;
	return 0;
}
