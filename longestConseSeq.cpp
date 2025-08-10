#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(), nums.end());
        int cnt=0;
        int lastSmallest = INT_MIN;
        int longest=0;

        for(int i=0; i<n; i++){
            if(nums[i]-1 == lastSmallest){
                cnt+=1;
                lastSmallest = nums[i];
            }
            else if(nums[i] != lastSmallest){
                cnt =1;
                lastSmallest = nums[i];
            }

            longest = max(longest, cnt);
        }
        return longest;
    }
};

int main(){
    Solution sol;
    vector<int> mat={0,3,7,2,5,8,4,6,0,1};
    int longestSequence;
   
    longestSequence= sol.longestConsecutive(mat);
    cout<<"longest Seuence is : "<<longestSequence;
    cout<<endl;

    
    
   
    return 0;
}