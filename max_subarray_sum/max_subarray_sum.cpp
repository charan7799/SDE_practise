#include <bits/stdc++.h>

using namespace std;

// // brute force

// int maxSubarraySum(int arr[], int n)
// {
//     /*
//         Don't write main().
//         Don't read input, it is passed as function argument.    
//         No need to print anything.
//         Taking input and printing output is handled automatically.
//     */
    
//     int sum = INT_MIN;
//     for(int i=0; i<n; i++){
//         int temp=0;
//         for(int j=0; j<=i; j++){
        
//             temp += arr[j];
//         }
//         if(temp > sum) 
//         {
//             // cout << temp << endl;
//             sum = temp;
//         }
//     }
//     return sum;
// }

// kadane's algorithm 
int maxSubarraySum(vector<int> &arr)
{
    int n = arr.size();
    int meh = 0;
    int msf = INT_MIN;

    for(int i=0; i<n; i++){
        meh += arr[i];
        if (meh>=msf)
            msf = meh;
        if (meh<=0)
            meh = 0;
        
    }
    if (msf>=0)
        return msf;
    return 0;
}

int main(){
    vector<int> arr{-2,1,-3,4,-1,2,1,-5,4};
    int sum = maxSubarraySum(arr);
    cout << sum << endl;
}

// striver's solution(kadane's algo to find the subarray + sum)
// #include<bits/stdc++.h>
// using namespace std;

// int maxSubArray(vector < int > & nums, vector < int > & subarray) {
//     int msf = INT_MIN, meh = 0;
//     int s = 0;
//     for (int i = 0; i < nums.size(); i++) {
//         meh += nums[i];
//         if (meh > msf) {
//             subarray.clear();
//             msf = meh;
//             subarray.push_back(s);
//             subarray.push_back(i);

//         }
//         if (meh < 0) {
//             meh = 0;
//             s = i + 1;
//         }
//     }

//     return msf;
// }

// int main() {
//     vector<int> arr{-2,1,-3,4,-1,2,1,-5,4};
//     vector < int > subarray;
//     int lon = maxSubArray(arr, subarray);
//     cout << "The longest subarray with maximum sum is " << lon << endl;
//     cout << "The subarray is " << endl;
//     for (int i = subarray[0]; i <= subarray[1]; i++) {
//         cout << arr[i] << " ";
//     }

// }