#include <iostream>
#include <stdio.h>





int map[101][101] = { 0 };//네트워크 맵
int visited[101] = { 0 };
int count = 0;//바이러스 걸리게 되는 컴퓨터 수
int com_num; //컴퓨터 갯수

void dfs(int j) {

	count++;
	visited[j] = 1;
	for (int i = 1; i <= com_num; i++) {
		if (map[j][i] == 1 && !visited[i])
			dfs(i);
	}
  
}
int main() {

	
	
	int edge_num;// 쌍의수
	int a, b;//입력용
	scanf("%d %d", &com_num,&edge_num);
	
	for(int i=0;i<edge_num;i++){
		scanf("%d %d", &a, &b);
		map[a][b] = map[b][a] = 1;
	}

	dfs(1);
	printf("%d", count-1);

	return 0;
} 
