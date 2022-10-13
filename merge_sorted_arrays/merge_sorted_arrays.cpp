#include <bits/stdc++.h> 

using namespace std;

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
    int gap = ceil(float(m+n)/2);
    
    while(gap>0){
        int i=0, j=gap;
        while(j<n+m){
            if(j<m && arr1[i]>arr1[j]) swap(arr1[i], arr1[j]);
            else if(j>=m && i<m && arr1[i]> arr2[j-m]) swap(arr1[i], arr2[j-m]);
            else if(j>=m && i>=m && arr2[i-m]> arr2[j-m]) swap(arr2[i-m], arr2[j-m]);
            i++;
            j++;
        }
        
        if(gap==1) gap =0;
        else{
            gap = ceil((float) gap / 2);
        }
    }
    for(int i = m; i<m+n; i++){
        arr1[i] = arr2[i-m];
    };
    return arr1;
}

int main(){
    vector<int> arr1{1,2,4,0,0}, arr2{3,5};
    arr1 = ninjaAndSortedArrays(arr1, arr2, 3, 2);

    for(auto it: arr1){
        cout<< it<<" ";
    }
    cout<< endl;

}