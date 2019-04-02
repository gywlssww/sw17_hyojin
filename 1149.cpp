#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	int info[1000][3],map[1000][3];
	int check = 0;

	for (int j = 1; j <= n; j++){
		for (int i = 0; i < 3; i++) {
			cin >> info[j][i];
		}
	}
	map[1][0] = info[1][0];
	map[1][1] = info[1][1];
	map[1][2] = info[1][2];

	for (int i = 2; i <= n; i++) {
		map[i][0] = min(map[i - 1][1], map[i - 1][2]) + info[i][0];
		map[i][1] = min(map[i - 1][0], map[i - 1][2]) + info[i][1];
		map[i][2] = min(map[i - 1][0], map[i - 1][1]) + info[i][2];
		
	}
	cout << min({ map[n][0],map[n][1],map[n][2] });



	return 0;

}
