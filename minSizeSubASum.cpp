#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int j=0;
        int n= nums.size();
        int minLength = INT_MAX;
        int sum=0;
        int length;

        for(int i =0; i<n; i++){
            sum += nums[i];
            while(sum>=target){
                length= i-j+1;

                if(length<minLength){
                    minLength= length;
                }
                sum -= nums[j];
                    j++;

            }
            // minLength = min(minLength, length);
        }
        return (minLength==INT_MAX? 0: minLength);
        
    }
};
int main(){
    Solution sol;
    vector<int> nums={3,1,3,4,2};
    int target=7;
    int miniSum= sol.minSubArrayLen(target, nums);

    
    cout<<"Minimum sum is : "<<miniSum<<endl;
    
   
    return 0;
}