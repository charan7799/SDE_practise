#include<bits/stdc++.h>

using namespace std;

void rotate(vector<vector<int>>& matrix) {
        for (int i=0; i<matrix.size(); i++){
            for (int j=0; j<i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        
        }
        for (int i=0; i<matrix.size(); i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
        
}

int main(){
    vector<vector<int>> a{{1,2,3}, {4,5,6}, {7,8,9}};
    rotate(a);
    for (int i = 0; i < a.size(); i++) {
    for (int j = 0; j < a[0].size(); j++) {
      cout << a[i][j] << " ";
    }
    cout << "\n";
  }
}