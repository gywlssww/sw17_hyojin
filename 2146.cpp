#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(string a,string b) {
	//sort는 알파벳 정렬 잘 해줌
	if (a.length() == b.length())
		return a < b;
	else
		return a.length() < b.length();

}

int main() {

	vector<string> input;
	string in;
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> in;
		input.push_back(in);
	}
	sort(input.begin(), input.end(),compare);
	string temp = "";
	for (int i = 0; i < num; i++) {
		if (temp != input[i]) {
			cout << input[i] << endl;
			temp = input[i];
		}
		else continue;
	}
	return 0;

}
