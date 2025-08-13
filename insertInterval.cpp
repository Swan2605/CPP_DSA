#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& arr, vector<int>& nInt) {
        int n= arr.size();
        vector<vector<int>> ans;
        int i=0;
        while(i<n && arr[i][1] < nInt[0]){
            ans.push_back(arr[i]);
            i+= 1;
        }
        while(i<n && arr[i][0]<= nInt[1]){
            nInt[0] = min(nInt[0], arr[i][0]);
            nInt[1] = max(nInt[1], arr[i][1]);
            i+= 1;
        }
        ans.push_back(nInt);
        while(i<n){
            ans.push_back(arr[i]);
            i+= 1;
        }
        return ans;
    }
};
int main(){
    Solution sol;
    vector<vector<int>> mat={{1,2},{3,5},{6,7},{8,10},{12,16}};
    vector<int> newMat={4,8};
    vector<vector<int>> NewArr;
    NewArr= sol.insert(mat, newMat);
    cout<<"New interval inserted"<<endl;
   
    
    return 0;
}