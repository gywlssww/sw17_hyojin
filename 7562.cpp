#include <iostream>
#include <queue>
#include <math.h>
using namespace std;
int main() {
	
	int dir[8][2] = { { -2,-1 },{ -1,-2 },{ 1,-2 },{ 2,-1 },{ -2,1 },{ -1,2 },{ 1,2 },{ 2,1 } };
	queue<pair<int, int>> road;
	int test,size, cnt_x, cnt_y,g_x,g_y,count=0;
	pair<int, int> current;
	cin >> test;
	int* ans = new int[test];
	while (test--) {
	 int map[300][300] = { 0 };//map
	 cin>>size>> cnt_x>> cnt_y>> g_x>> g_y;
	 road.push(make_pair(cnt_x, cnt_y));
	 map[cnt_x][cnt_y] = 1;
	 while (!road.empty()) {
		 current = road.front();
		 cnt_x = current.first;
		 cnt_y = current.second;
		 if (cnt_x == g_x&&cnt_y == g_y)break;//도착
		 road.pop();
		 for (int i = 0; i < 8; i++) {
			 if (cnt_x + dir[i][0] >= 0 && cnt_x + dir[i][0] < size
				 &&cnt_y + dir[i][1] >= 0 && cnt_y + dir[i][1] < size && !map[cnt_x + dir[i][0]][cnt_y + dir[i][1]]) {//미방문
				 map[cnt_x + dir[i][0]][cnt_y + dir[i][1]] = map[cnt_x][cnt_y] + 1;
				 road.push(make_pair(cnt_x + dir[i][0], cnt_y + dir[i][1]));//큐에넣기
			 }
		 }
	 }ans[count++] = map[g_x][g_y]-1;
	 
	}
	for (int i = 0; i < count; i++)cout << ans[i] << endl;
	
	return 0;

}
