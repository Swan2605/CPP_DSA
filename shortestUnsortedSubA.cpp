#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n= nums.size();
        int left=0, right= n-1;
        while( left <n-1 && nums[left]<= nums[left+1]){
            left++;
        }
        if(left== n-1) return 0;
        while(right>0 && nums[right] >= nums[right-1]){
            right--;
        }
        int mini = INT_MAX;
        int maxi= INT_MIN;
        for(int i= left; i<=right; i++){
            mini= min(mini, nums[i]);
            maxi= max(maxi, nums[i]);
        }
        while(left>0 && nums[left-1] > mini){
            left--;
        }
        while(right < n-1 && nums[right +1] < maxi){
            right++;
        }
        return right- left+1;
    }
};
int main(){
    Solution sol;
    vector<int> mat={2,6,4,8,10,9,15};
    int res;
    res= sol.findUnsortedSubarray(mat);
    cout<<"Unsorted sub array : "<<res;
   
    return 0;
}