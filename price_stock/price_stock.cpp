#include <bits/stdc++.h> 

using namespace std;
int maximumProfit(vector<int> &arr){
    // Write your code here.
    int min_price = INT_MAX;
    int max_pro = 0;
    int temp_pro;
    for(int i=0; i< arr.size(); i++){
        if(min_price>=arr[i]) min_price = arr[i];
        temp_pro = arr[i]-min_price;
        if(temp_pro > max_pro) max_pro = temp_pro;
    }
    return max_pro;
}
int main(){
    vector<int> a{7,1,5,3,6,4};
    cout<<"the maxprofit for the given stocks is "<<maximumProfit(a)<< endl;

}