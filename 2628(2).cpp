#include <iostream>
#include <algorithm>

using namespace std;
int n_tree;
int cut(int*, int);
int main() {

	int t_height,chk=0;
	int* trees;
	scanf("%d %d", &n_tree ,&t_height);
	trees = new int[n_tree];

	int input;
	scanf("%d", &input);
	trees[0] = input;
	int min = trees[0];
	int max = trees[0];
	for (int i = 1; i < n_tree; i++) {
		
		scanf("%d", &input);
		trees[i] = input;
		
		if (input > max)
			max = input;
		if (input < min)
			min = input;
	}
	//나무 길이 입력
	//int mid = (*max_element(trees, trees+n_tree) + *min_element(trees,trees+n_tree)) / 2;
	int mid = (max + min) / 2;
	while (chk != t_height) {
		
		chk = cut(trees,mid);
		if (chk > t_height)
			mid += (mid/2);
		else if (chk < t_height)
			mid -= (mid / 2);
		

	} 
	printf("%d", mid);
	return 0;
} 
int remain;
int cut(int* trees, int mid) {

	int sum = 0;
	
	for (int i = 0; i < n_tree; i++) {
		remain = trees[i] - mid;
		if (remain > 0) {
			sum += remain;
		}
	}

	return sum;

}
