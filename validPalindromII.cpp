#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool validPalindrome(string s) {
        int l=0;
        int r = s.length() -1;
        while(l<r){
            if(s[l] == s[r]){
                l++;
                r--;
            }
            else{
                return isPalindrom(s, l+1, r) || isPalindrom(s, l, r-1);
            }
        }
        return true;
    }


private:
    bool isPalindrom(string s, int l, int r){
        while(l<r){
            if(s[l] ==s[r]){
                l++;
                r--;
            }
            else{return false;}
            
        }
        return true;
    }
};
int main(){
    Solution sol;
    string s ="rotatxor";
    
    bool isPalindrome = sol.validPalindrome(s);
    if(isPalindrome== true){
        cout<<"It is an Plindrome"<<endl;
    }
    else{
        cout<<"It is not an Palindrome"<<endl;
    }
    return 0;
}