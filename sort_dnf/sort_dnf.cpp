#include <bits/stdc++.h> 

using namespace std;

void sort012(int *arr, int n)
{
   //   Write your code here
//     COUNTING SORT
//     int i0 =0;
//     int i1 =0;
//     int i2 =0;
    
//     for(int i=0; i<n; i++){
//         if(arr[i]==0) i0++;
//         if(arr[i]==1) i1++;
//         if(arr[i]==2) i2++;
//     }
//     for(int i=0; i<i0; i++){
//         arr[i]=0;
//     }
//     for(int i=i0; i<i0+i1; i++){
//         arr[i]=1;
//     }
//     for(int i=i0+i1; i<i0+i1+i2; i++){
//         arr[i]=2;
//     }
    // DUTCH NATIONAL Flag Algo VARIATION
    int low=0;
    int mid=0;
    int high=n-1;
    for(int i=0; i<n; i++){
        while(mid<=high){
            switch(arr[mid])
            {
                case 0:
                    swap(arr[low++], arr[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(arr[mid], arr[high--]);
                    break;

            }
        }
    }
}
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a[] = {1,1,1,2,0,0,2,0,1};
    sort012(a, 9);
    for(int i=0; i<9; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}