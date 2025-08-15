#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n= s.length();
        string ans ="" ;

        reverse(s.begin(), s.end());
        for(int i=0; i<n; i++){
            string word="";
            while(i<n && s[i] != ' '){
                word+=s[i];
                i++;
            }
            reverse(word.begin(), word.end());
            if(word.length() >0){
                ans += " " + word;
            }
        }
        return ans.substr(1);
        
    }
};

int main(){
    Solution sol;
    string s ="the sky is blue";
    string ans= sol.reverseWords(s);
    cout<<"Reverse of the : "<<s<<" -- string is : "<<ans;
    cout<<endl;
    return 0;
}