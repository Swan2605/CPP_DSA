#include <iostream>
#include <vector>
#include <unordered_set>
using namespace  std;

class Solution{
    public:
    bool containsDuplicate(vector<int>& nums){
        unordered_set<int> us;
        int n= nums.size();
        int temp;
                                                                
        us.insert(nums[0]);
        for(int i=1; i<n; i++){
            temp= nums[i];
            if(us.find(temp)!= us.end()){
            return true;
            }
        us.insert(temp);
        }
        return false;
    }
};
int main(){
    Solution sol;
    vector<int> nums={1,2,3,1};
    bool duplicate= sol.containsDuplicate(nums);
    if(duplicate ==true){
        cout<<"It has duplicates"<<endl;
    }
    else{
        cout<<"No duplicate found"<<endl;
    }
    return 0;
}
