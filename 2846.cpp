#include <iostream>
#include <algorithm>
using namespace std;
int main() {

	int num,first,second,count=0;
	int* info;
	
	cin >> num;
	info = new int[num];

	cin >> first; //첫번째 높이 입력
	second = first;
	for (int i = 0; i < num-1; i++) {
		int input;
		cin >> input;
		if (input > second)
			second = input;
		else {
			info[count++] = second - first;
			first = input;
			second = input;
		}
	}info[count] = second - first;

    int ans = *max_element(info,info+count+1);
	cout << ans << endl;
	return 0;


}
