#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int mW= 0;
        int lp=0, rp=height.size()-1;
        while(lp<rp){
            int w= rp-lp;
            int ht = min(height[lp], height[rp]);
            int cW = w * ht;
            mW= max(mW , cW);
            height[lp] < height[rp] ? lp++ : rp--;

        }
        return mW;
    }
};

int main(){
    Solution sol;
    vector<int> nums={1,8,6,2,5,4,8,3,7};
    int Area= sol.maxArea(nums);

    
    cout<<"Max area covered : "<<Area<<endl;
    
   
    return 0;
}