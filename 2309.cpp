#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int nums[9] = { 0 };
	int ans[7] = { 0 };
	int sum = 0,ans1,ans2;
	for (int i = 0; i < 9; i++) {
		cin >> nums[i];
		sum += nums[i];
	}
	
	for (int i = 0; i < 8; i++) {
		//if (sum == 100)break;
		sum -= nums[i];
		for (int j = i + 1; j < 9; j++) {
			sum -= nums[j];
			if (sum == 100) {
				ans1 = i; ans2 = j;
				break;
			}sum += nums[j];
		}
		if (sum == 100)break;
		else sum += nums[i];
	}
	int chk = 0;
	for (int i = 0; i < 9; i++) {
		if (chk == 7)break;
		if(i==ans1||i==ans2)
		 continue;
		else ans[chk++] = nums[i];
	}
	sort(ans, ans + 7);
	for (int i = 0; i < 7; i++) {
		cout << ans[i] << endl;
	}
	return 0;
}
