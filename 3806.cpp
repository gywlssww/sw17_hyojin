S:0->1 만 가능한 조건 아직 고려 안해서.. 구냥 일단 올림...

#include <iostream>
#include <string>
using namespace std;

void count(string s, string t) {
	int count = 0;
	int flagcount = 0;//교환 가능한 경우는 횟수가 하나 적음.
	for (int i = 0; i < s.size(); i++) {
		int flag = int(s[i]) ^ int(t[i]);
		if (flag){
			count++;
			if (flag == 1) 
				flagcount++;
		}
		
	}
	count -= int(flagcount / 2);
	cout << count << endl;
}

int main() {

	int input;
	cin >> input;
	
	string s, t;
	for (int i=0; i < input; i++) {
		
		cin >> s>>t;
		count(s,t);
	}


}
