#include <iostream>
#include <vector>
#include <map>
using namespace std;

class twoSumSolution{
    public:
    vector<int> twoSum(vector<int> &nums, int target){
        map<int, int> mapp;
        int n= nums.size();
        for(int i=0; i<n; i++){
            int num = nums[i];
            int moreNeeded = target- num;

            if(mapp.find(moreNeeded) != mapp.end()){
                return {mapp[moreNeeded], i};
            }
            mapp[num]=i;
        }
        return {-1, -1};
    }
};

int main(){
    twoSumSolution sol;

    vector<int> nums ={2,7,11,15};
    int target =18;
    vector<int> result = sol.twoSum(nums, target);
    if(result.size() ==2){
        cout<< "Output: "<< result[0]<< ","<<result[1]<<endl;
    }
    else{
        cout<<"No solution"<<endl;
    }
    return 0;

}