#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n= nums.size();

        sort(nums.begin(), nums.end());
        int frq=1, ans=nums[0];
        
        for(int i=1; i<n; i++){
            if(nums[i] == nums[i-1]){
                frq++;
            }
            else{
                frq=1;
                ans=nums[i];
            }
            if(frq> n/2){
                return ans;
            }
            
        }
        return ans;
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