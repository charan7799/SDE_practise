#include <bits/stdc++.h> 

using namespace std;

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here
    int xor1=arr[0]; 
    for(int i=1; i<n; i++){
        xor1 ^= arr[i];
    }
    for (int i = 1; i <= n; i++)
        xor1 = xor1 ^ i;
    
    int set_bit = xor1 & ~(xor1 - 1);
    
    int x=0, y=0;
    pair<int, int> nums;
    
    
    for(int i=0; i<n; i++){
        if(arr[i] & set_bit){
            x ^= arr[i];
        }
        else{
            y ^= arr[i];
        }
    }
    for(int i=1; i<n+1; i++){
        if(i & set_bit){
            x ^= i;
        }
        else{
            y ^= i;
        }
    }
    int x_count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            x_count++;
        }
    }
    if(x_count==0){
        return {x, y};
    }
    
    return {y, x};
}

int main(){
    vector<int> arr{1,2,2,5,4};
    auto out = missingAndRepeating(arr, 5);
    
    cout<<out.first<<' '<<out.second;
    cout<<endl;
}