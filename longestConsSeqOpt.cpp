#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n= nums.size();

        if(n==0) return 0;

        int cnt=0;
        int longest=0;

        unordered_set<int> st;
        for(int i=0; i<n; i++){
            st.insert(nums[i]);
        }

        for(auto it : st){
            if(st.find(it -1) ==  st.end()){
                cnt=1;
                int x =it;
                while(st.find(x+1)!= st.end()){
                    x= x+1;
                    cnt= cnt+1;

                }
            }
            longest = max(longest, cnt);
        }

        
        return longest;
    }
};

int main(){
    Solution sol;
    vector<int> mat={0,3,7,2,5,8,4,6,0,1};
    int longestSequence;
   
    longestSequence= sol.longestConsecutive(mat);
    cout<<"longest Seuence is : "<<longestSequence;
    cout<<endl;

    
    
   
    return 0;
}