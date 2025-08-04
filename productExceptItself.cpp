#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        //prefix
        for(int i=1; i<n; i++){
            ans[i] = ans[i-1] * nums[i-1];
        }
        //suffix
        int suffix=1;
        for(int i= n-2; i>=0; i--){
            suffix *= nums[i+1];
            ans[i] *= suffix;
        }
        return ans;
    }
};

int main(){
    Solution sol;
    vector<int> nums={1,2,3,4};
    vector<int> product= sol.productExceptSelf(nums);

    
    cout << "Final product: [";
    for (int i = 0; i < product.size(); ++i) {
        cout << product[i];
        if (i < product.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
    return 0;
}