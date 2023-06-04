#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix){
	int col0 = 1;
	for(int i = 0; i < matrix.size(); i++){
		for(int j = 0; j < matrix[0].size(); j++){
			if(matrix[i][j] == 0){
				matrix[i][0] = 0;
				if(j != 0) matrix[0][j] = 0;
				else col0 = 0;
			}
		}
	}
	for(int i = matrix.size()-1; i > 0; i--){
		for(int j =  matrix[0].size()-1; j > 0; j--){
			if(matrix[i][0] == 0 or matrix[0][j] == 0){
				matrix[i][j] = 0;
			}
		}
	}
	if(matrix[0][0] == 0){
		for(int i = 0; i < matrix[0].size(); i++){
			matrix[0][i] = 0;
		}
	}
	if(col0 == 0){
		for(int i = 0; i < matrix.size(); i++){	
			matrix[i][0] = 0;
		}
	}
}
