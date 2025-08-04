#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // int k=6;
        int  n= nums.size();
        int count =0;
        int sum;
        for(int i=0; i<n; i++){
            sum=0;
            for(int j=i; j<n; j++){
               
                sum += nums[j];
                if(sum==k) count++;
            }
        }
        return count;
    }
};
int main(){
    Solution sol;
    vector<int> nums ={3,1,3,4,2};
    int k=6;
    int SubarraySum= sol.subarraySum(nums, k);

    cout<<"subarraySum  is : "<<SubarraySum<<endl;
    
   
    return 0;
}