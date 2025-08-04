#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int val : nums){
            if(s.find(val) != s.end()){
                return val;
            }
            s.insert(val);
        }
        return -1;
        
    }
};

int main(){
    Solution sol;
    vector<int> nums={1,2,3,1};
    int duplicate= sol.findDuplicate(nums);

    if(duplicate ==true){
        cout<<"It has duplicates which is : "<<duplicate<<endl;
    }
    else{
        cout<<"No duplicate found"<<endl;
    }
    return 0;
}

