#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;

class Solution {
public:
    int countSubstrings(string s) {
        int cnt=0;

        for(int i=0; i<s.length(); i++){
            cnt += cntPalind(s, i, i);
            cnt += cntPalind(s, i, i+1);
        }
        return cnt;
    }

private:
    int cntPalind(string s, int l, int r){
        int cnt=0;
        while(l >=0 && r<s.length() && s.at(l) == s.at(r)){
            cnt++;
            l--;
            r++;
        }
        return cnt;
    }
};

int main(){
    Solution sol;
    string s ="abbaccbca";
    int count;
    count= sol.countSubstrings(s);
    cout<<"Count of the palindrom in "<<s<<" string is : "<<count;
    cout<<endl;

    
    
   
    return 0;
}