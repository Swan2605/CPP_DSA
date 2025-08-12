#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n= nums.size();
        
        for(int val : nums){
            int frq=0;
            for(int elm : nums){
                if(elm == val){
                    frq++;
                }
                if(frq>n/2){
                    return val;
                }
            }
        }
        return -1;
    }
};

int main(){
    Solution sol;
    vector<int> mat={2,2,1,1,1,2,2};
    int majEle;
    majEle= sol.majorityElement(mat);
    cout<<"Majority element is : "<<majEle; 
   
    return 0;
}