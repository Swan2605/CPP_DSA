#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution{
    public:
    int maxSubArray(vector<int>& nums){
        int sum=0;
        int maxi= INT_MIN;
        int n = nums.size();

        for(int i=0; i<n; i++){
            sum += nums[i];

            if(sum>maxi)
            maxi = max(maxi, sum);

            if(sum<0){
                sum=0;
            }
        }
        
    return maxi;
    }
};

int main(){
    Solution sol;
    vector<int> nums ={-2,1,-3,4,-1,2,1,-5,4};
    int result = sol.maxSubArray(nums);
    cout<<"Maximum sub array found is: "<<result<<endl;
    return 0;
}