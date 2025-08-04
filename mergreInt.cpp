#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        vector<int> curr, last;
        int n= intervals.size();

        if(intervals.empty()) return{};
        sort(intervals.begin(), intervals.end());
        result.push_back(intervals[0]);

        for(int i=1; i<n; i++){
            curr= intervals[i];
            last= result.back();

            if(curr[0]<= last[1]){
                result.back()[1] = max(curr[1], last[1]);

            }
            else{
                result.push_back(curr);
            }
        }
        return result;


    }
};
int main(){
    Solution sol;
    vector<vector<int>> intervals={{1,3},{2,6},{8,10},{15,18}};

    vector<vector<int>> mergeResult= sol.merge(intervals);

    
    for(int i=0; i<mergeResult.size(); i++){
         cout << "["<<  mergeResult[i][0]<<"," << mergeResult[i][1]<<"]"<< endl;
    }
    
    
    return 0;
}