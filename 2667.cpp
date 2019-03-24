#include <iostream>
#include <stdio.h>
#include<queue>
#include<algorithm>
#include <vector>
using namespace std;
int map[27][27] = { 0 };
int dir[4][2] = { { 1,0 },{ -1,0 },{ 0,1 },{ 0,-1 } };
vector<int> ans;
int main() {
	int n;
	cin >> n;
	vector<int> ans;
	queue < pair<int, int>> group;
	int count;
	pair<int, int> current;
	int x, y;
		
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%1d", &map[i + 1][j + 1]);
		}
	}//입력
	
	for (int i = 1; i < n+1; i++) {
		for (int j = 1; j < n+1; j++) {
			if (map[i][j] == 1) {
				count = 0;
				group.push(make_pair(i, j));
				map[i][j]++;//방문
				while (!group.empty()) {
					count++;
					current = group.front();
					group.pop();

					for (int i = 0; i < 4; i++) {
						x = current.second + dir[i][0];
						y = current.first + dir[i][1];
						if (map[y][x] == 1) {
							group.push(make_pair(y, x));
							map[y][x]++;//visited
						}
					}
				}ans.push_back(count);
			}
	 }
	}
	int size = ans.size();
	sort(ans.begin(), ans.end());
	cout << size<< endl;
	for (int i = 0; i < size; i++)
		cout << ans.at(i) << endl;

 return 0;

}
