#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {

	int row, col;
	int c_row, c_col,line,r_pre=0,c_pre=0;
	scanf("%d %d %d", &row, &col, &line);
	
	int row_line[100];
	int col_line[100];
	int row_count = 0,col_count = 0;
	
	for (int i = 0; i < line; i++) {
		int dict, line_num;
		scanf("%d %d", &dict, &line_num);
		if (dict == 1) {
			
			row_line[row_count] = line_num;
			row_count++;
		}
		else {
			col_line[col_count]=line_num;
			col_count++;
		}
	}
	row_line[row_count] = row;
	col_line[col_count] = col;
	sort(row_line, row_line + row_count);
	sort(col_line, col_line + col_count);

	//sort
	vector<int> row_inter;
	vector<int> col_inter;
	
	while (row_count) {
		row_inter.push_back(row_line[row_count]-row_line[row_count-1]);
		row_count--;
	}
	row_inter.push_back(row_line[0]);
	while (col_count) {
		col_inter.push_back(col_line[col_count] - col_line[col_count - 1]);
		col_count--;
	}
	col_inter.push_back(col_line[0]);
	int r_max = *max_element(row_inter.begin(), row_inter.end());
	int c_max = *max_element(col_inter.begin(), col_inter.end());

	printf("%d", r_max*c_max);
	
	return 0;
}
