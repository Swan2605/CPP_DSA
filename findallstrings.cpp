#include <iostream>
#include <vector>
#include <climits>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> pcnt(26,0), scnt(26,0);
        vector<int>ans;
        for(char c : p){
            pcnt[c -'a']++;
        }

        for(int i=0; i< s.size(); i++){
            scnt[s[i] - 'a']++;
            if(i>= p.size()){
                scnt[s[i - p.size()] - 'a']--;
            }
            if(pcnt == scnt){
                ans.push_back(i- p.size() +1);
            }

        }
        return ans;
    }
};

int main(){
    Solution sol;
    string s ="cbaebabacd";
    string p ="abc";
    vector<int> result= sol.findAnagrams(s, p);
    cout<<"All anagram of the string is : ";
    for(auto &val: result){
        cout<<" "<<val;
    }
    cout<<endl;
    return 0;
}