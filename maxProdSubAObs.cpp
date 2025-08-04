#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int  n= nums.size();
        int maxi = INT_MIN;
        int pre=1, suff=1;
        for(int i=0; i<n; i++){
            if(pre==0) pre=1;
            if(suff==0) suff=1;
            pre *= nums[i];
            suff *= nums[n-i-1];

            maxi = max(maxi, max(pre, suff));
        }
        return maxi;
    }
};
int main(){
    Solution sol;
    vector<int> nums={3,1,3,4,2};
    int maximumProduct= sol.maxProduct(nums);

    
    cout<<"Maximum Product is : "<<maximumProduct<<endl;
    
   
    return 0;
}