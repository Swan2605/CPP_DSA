#include <iostream>
#include <vector>
#include <climits>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int  n= nums.size();
        int maxi = INT_MIN;
        int prod;
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                prod=1;
                for(int k=i ; k<=j; k++){
                    prod *= nums[k];
                }
                maxi = max(maxi, prod);
            }
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