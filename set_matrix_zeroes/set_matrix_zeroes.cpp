#include <iostream> 
#include <vector>

using namespace std;

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    int rows = matrix.size();
    int cols = matrix[0].size();
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if (matrix[i][j] == 0){
                int ind = i-1;
                while(ind>=0){
                    if (matrix[i][j] != 0){
                        matrix[ind][j] = -1;
                        ind--;
                    }
                }
                ind = i+1;
                while(ind<rows){
                    if (matrix[i][j] != 0){
                        matrix[ind][j] = -1;
                        ind++;
                    }
                }
                ind = j-1;
                while(ind>=0){
                    if (matrix[i][j] != 0){
                        matrix[i][ind] = -1;
                        ind--;
                    }
                }
                ind = j+1;
                while(ind<cols){
                    if (matrix[i][j] != 0){
                        matrix[i][ind] = -1;
                        ind++;
                    }  
                }
            }
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if (matrix[i][j] == -1){
                matrix[i][j] =0;
            }
        }
    }
}

void main(){

}