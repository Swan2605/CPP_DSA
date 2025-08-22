#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length() <=1) return s;
        string lps = "";

        for(int i =1; i< s.length(); i++){
            int low=i;
            int high=i;
            while(s[low] == s[high]){
                low--;
                high++;
                if(low==-1 || high ==s.length()) break;
            }
            string palin = s.substr(low+1 , high-(low+1));
            if(palin.length() > lps.length()){
                lps = palin;
            }

            low=i-1;
            high=i;
            while(s[low] == s[high]){
                low--;
                high++;
                if(low==-1 || high ==s.length()) break;
            }
            palin = s.substr(low+1 , high-(low+1));
            if(palin.length() > lps.length()){
                lps = palin;
            }
        }
        return lps;
    }
};

int main() {
    Solution sol;
    string s="babad";

    cout << "Longest Palindromic Substring: " << sol.longestPalindrome(s) << endl;

    return 0;
}
