#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int>mpp;
        mpp[0] =1;
        int  n= nums.size();
        int preSum = 0, count =0;
        for(int i=0; i<n; i++){
            preSum += nums[i];
            int remove = preSum - k;
            count += mpp[remove];
            mpp[preSum] +=1;
        }
        return count;
    }
};
int main(){
    Solution sol;
    vector<int> nums ={1,2,3,-3,1,1,1,4,2,-3};
    int k=3;
    int SubarraySum= sol.subarraySum(nums, k);

    cout<<"subarraySum  is : "<<SubarraySum<<endl;
    
   
    return 0;
}