#include <iostream>
#include <vector>
#include <utility>
using namespace std;

class Solution{
    public:
    vector<int> moveZeros(vector<int>& nums){
        int n= nums.size();
        int j =-1;
        for(int i=0; i<n; i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        if(j == -1){
            return nums;
        }
        for(int i=j+1; i<n; i++){
            if(nums[i] != 0){
                swap(nums[i] , nums[j]);
                j++;            
            }
        }
        return nums;
    }
};

int main(){
    Solution sol;
    vector<int> nums ={0,1,0,3,12};
    sol.moveZeros(nums);

    cout<<"Array after zero moved : ";
    for(int num : nums){
        cout<<" "<<num;
    }
    cout<<endl;
    return 0;
}