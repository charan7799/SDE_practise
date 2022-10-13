import java.util.* ;
import java.io.*; 

public class Solution {
    public static void setZeros(int matrix[][]) {
        // Write your code here..
        int rows = matrix.length;
        int cols = matrix[0].length;
        int arr_row[] = new int[rows];
        int arr_col[] = new int[cols];
        
        Arrays.fill(arr_row, -1);
        Arrays.fill(arr_col, -1);
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==0){
                    arr_row[i]=0;
                    arr_col[j]=0;
                }
            }
        }
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(arr_row[i]==0 || arr_col[j]==0){
                    matrix[i][j]=0;
                }
            }
        }
    }

}