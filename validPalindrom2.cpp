#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <cctype>// for isalnum
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int n= s.length();
        int st=0, end= n-1;
        while(st< end){
            if(!isalnum(s[st])){
                st++;
                continue;
            }
            if(!isalnum(s[end])){
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
    
    bool isPalindrome2 = sol.isPalindrome(s);
    if(isPalindrome2== true){
        cout<<"It is an Plindrome"<<endl;
    }
    else{
        cout<<"It is not an Palindrome"<<endl;
    }
    return 0;
}