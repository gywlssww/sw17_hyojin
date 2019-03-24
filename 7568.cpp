#include<iostream>
using namespace std;
struct info {
	int height;
	int weight;
	int rank = 1;

};
int main() {
	int n,max=0;
	cin >> n;

	info* table = new info[n];
	for (int i = 0; i < n; i++) {
		cin >> table[i].height >> table[i].weight;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (table[i].height >table[j].height&&table[i].weight > table[j].weight) {
					table[j].rank++;
			}
		}
	}	
	for (int i = 0; i < n; i++) {
		cout << table[i].rank << " ";
	}



	return 0;

}
