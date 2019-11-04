#include <iostream>
using namespace std;
int main() {

	int testcase, N, K,c;
	int* count;
	cin >> testcase;
	count = new int[testcase];//정답 저장 배열

	for (int i = 0; i < testcase; i++) {
		cin >> N >> K;
		int candy = 0;
		for (int j = 0; j < N; j++) {
			cin >> c;
			candy += (c / K)>0 ? c / K : 0;
		}
		count[i] = candy;
	}
	for (int i = 0; i < testcase; i++)
    cout << count[i]<<endl;
	
	return 0;

}
