#include <iostream>
#include <string>

using namespace std;
bool check(int compute);
int main() {

	string input;
	string right = "It is a prime word.";
	string wrong = "It is not a prime word.";

	cin >> input;
	int compute = input.length();
	int balance = 26;

	for (int i = 0; i < input.length(); i++) {

		if (input[i] <= 'Z')
			compute += input[i]-'A'+balance;
		else
			compute += input[i] - 'a';

	}
	//소수 판별
	if (check(compute))
		cout << right;
	else
		cout << wrong;
	
	return 0;
}
bool check(int compute) {
	
	for (int i = 2; i < compute; i++) {
		if (compute%i==0) 
			return false;
	}
	return true;
}
