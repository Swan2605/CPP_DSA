#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n= s.size();
        vector<int> hash(256, -1);
        int l=0, r=0;
        int maxL =0;

        while(r<n){
            if(hash[s[r] != -1]){
                if(hash[s[r]] >= l){
                    l= hash[s[r]]+1;
                }
            }
            int len = r-l+1;
            maxL= max(len, maxL);
            hash[s[r]]=r;
            r++;
        }
        return maxL;
    }
};

int main() {
    Solution sol;
    string s="abcabcbb";

    cout << "Length of longest substring: " << sol.lengthOfLongestSubstring(s) << endl;

    return 0;
}
