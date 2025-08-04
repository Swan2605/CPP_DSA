#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n= nums.size();
        set <vector<int>> st;
        for(int i=0; i<n; i++){
            set <int> hashset;
            for(int j= i+1; j<n; j++){
                int third = -(nums[i] + nums[j]);
                if(hashset.find(third) != hashset.end()){
                    vector<int> temp ={nums[i], nums[j], third};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hashset.insert(nums[j]);
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = sol.threeSum(nums);
    cout << "Unique triplets that sum to zero are:" << endl;
    cout << "[" << endl;
    for (const auto& triplet : result) {
        cout << "  [";
        for (size_t i = 0; i < triplet.size(); ++i) {
            cout << triplet[i] << (i == triplet.size() - 1 ? "" : ", ");
        }
        cout << "]" << endl;
    }
    cout << "]" << endl;

    return 0;
}