#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();
        int lMax=0;
        int rMax=0;
        int total=0;
        int l=0, r=n-1;

        while(l<r){
            if(height[l] <= height[r]){
                if(lMax > height[l])
                    total+= lMax- height[l];
                
                else
                    lMax= height[l];
                    l=l+ 1;
            }
            else
            {
                if(rMax > height[r])
                    total += rMax - height[r];

                else
                    rMax= height[r];
                    r = r- 1;
            }
        }
        return total;
    }
};

int main(){
    Solution sol;
    vector<int> nums={1,8,6,2,5,4,8,3,7};
    int Area= sol.trap(nums);

    
    cout<<"Max area covered : "<<Area<<endl;
    
   
    return 0;
}