#include<bits/stdc++.h>

using namespace std;

int findDuplicate_usingFrequency(vector<int> &arr, int n){
	// Write your code here.
    int freq[n + 1] = {
    0
  };
  for (int i = 0; i < n; i++) {
    if (freq[arr[i]] == 0) {
      freq[arr[i]] += 1;
    } else {
      return arr[i];
    }
  }
  return 0;
}

int findDuplicate_tortoise(vector<int>& nums) {
    int fast = nums[0];
    int slow = nums[0];
    do{
        fast = nums[nums[fast]];
        slow = nums[slow];
    }while(slow!=fast);
    fast = nums[0];
    while(slow!=fast){
        fast = nums[fast];
        slow = nums[slow];
    }
    return fast;
}

int main(){
    vector<int> arr{1,2,4,4,3};
    cout<<findDuplicate_tortoise(arr);
}