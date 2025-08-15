#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAlphaNum(char ch){
        if((ch >='0' && ch<='9') || (tolower(ch)>='a' && tolower(ch)<='z')){
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int n= s.length();
        int st=0, end= n-1;
        while(st< end){
            if(!isAlphaNum(s[st])){
                st++;
                continue;
            }
            if(!isAlphaNum(s[end])){
                end--;
                continue;
            }
            if(tolower(s[st]) != tolower(s[end])){
                return false;
            }
            st++, end--;
        }
        return true;
    }
};
int main(){
    Solution sol;
    string s ="A man, a plan, a canal: Panama";
    
    bool isPalindrome = sol.isPalindrome(s);
    if(isPalindrome== true){
        cout<<"It is an Plindrome"<<endl;
    }
    else{
        cout<<"It is not an Palindrome"<<endl;
    }
    return 0;
}