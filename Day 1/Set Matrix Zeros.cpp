#include <bits/stdc++.h>
void setZeros(vector<vector<int>> &matrix){
	vector<pair<int, int>> coordinates;
	for(int i = 0; i < matrix.size(); i++){
		for(int j = 0; j < matrix[0].size(); j++){
			if(matrix[i][j] == 0) coordinates.push_back({i, j});
		}
	}
	for(auto it : coordinates){
		for(int i = 0; i < matrix[0].size(); i++){
			matrix[it.first][i] = 0;
		}
		for(int i = 0; i < matrix.size(); i++){
			matrix[i][it.second] = 0;
		}
	}
}