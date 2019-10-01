#include <iostream>
#include <algorithm>

using namespace std;
long long int n_tree;

int main() {

	long long t_height,chk=0;
	long long int* trees;
	long long ans = 0;
	scanf("%lld %lld", &n_tree ,&t_height);
	trees = new long long int[n_tree];

	long long int max = 0;

	for (int i = 0; i < n_tree; i++) {
		
		scanf("%lld", &trees[i]);
			
		if (trees[i]> max)
			max = trees[i];
	}
	long long min = 0;
	long long int mid;
	long long int remain;
	//int mid = (*max_element(trees, trees+n_tree) + *min_element(trees,trees+n_tree)) / 2;
	
	while (min<=max) {
		mid = (max + min) / 2;

		long long sum = 0;

		for (int i = 0; i < n_tree; i++) {
			remain = trees[i] - mid;
			if (remain > 0) {
				sum += remain;
			}
		}
		if (sum > t_height){
			if (ans < mid)
				ans = mid;
			min = mid + 1;
		}
		else {
			max = mid - 1;
		}
			
		

	} 
	printf("%lld", mid);
	return 0;
} 
