#include <bits/stdc++.h> 

using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    vector<vector<int>> merged;
    sort(intervals.begin(), intervals.end());
    if(intervals.size()==0) return merged;
    vector<int> temp = intervals[0];
    
    for(auto it: intervals){
        if(it[0]<=temp[1]){
            temp[1] = max(it[1], temp[1]);
        }
        else{
            merged.push_back(temp);
            temp = it;
        }
        
    }
    merged.push_back(temp);
    return merged;
}
int main() {
  vector < vector < int >> arr;
  arr = {{1, 3}, {2, 4}, {2, 6}, {8, 9}, {8, 10}, {9, 11}, {15, 18}, {16, 17}};
  vector < vector < int >> ans = mergeIntervals(arr);

  cout << "Merged Overlapping Intervals are " << endl;

  for (auto it: ans) {
    cout << it[0] << " " << it[1] << "\n";
  }
}
