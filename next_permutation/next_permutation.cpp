#include <bits/stdc++.h>

using namespace std;

vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    next_permutation(permutation.begin(), permutation.end());
    int ind0=-1;
    int ind1;
    for(int i=n-2; i>=0; i--){
        if(permutation[i]<permutation[i+1]){
            ind0 = i;
            break;
        }
    }
    if (ind0<0){
        reverse(permutation.begin(), permutation.end());
    }
    else{
        for(int i=n-1; i>ind0; i--){
            if(permutation[ind0]<permutation[i]){
                ind1 = i;
                break;
            }
        }
        swap(permutation[ind0], permutation[ind1]);
        sort(permutation.begin()+ind0+1, permutation.end());
    }
        
        // striver's code(less variables used, hence less execution time)
        // int k, l;
        // for (k = n - 2; k >= 0; k--) {
        //     if (nums[k] < nums[k + 1]) {
        //         break;
        //     }
        // }
        // if (k < 0) {
        //     reverse(nums.begin(), nums.end());
        // } else {
        //     for (l = n - 1; l > k; l--) {
        //         if (nums[l] > nums[k]) {
        //             break;
        //         }
        //     } 
        //     swap(nums[k], nums[l]);
        //     reverse(nums.begin() + k + 1, nums.end());
        // }

    
    
    
    return permutation;
}

int main(){
    vector<int> arr{1, 3, 2, 6};
    cout<<"Given array"<<endl;
    for(auto i: arr){
        cout<<i<<" ";
    }
    auto next_perm = nextPermutation(arr, arr.size());
    
    cout<<"\nits next permutation"<<endl;
    for(auto i: next_perm){
        cout<<i<<" ";
    }
}