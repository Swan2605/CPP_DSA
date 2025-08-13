#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;
        
        for(const auto &elem : s){
            m1[elem]++;
        }
        for(const auto &elem : t){
            m2[elem]++;
        }
        return m1==m2;
    }
};
int main(){
    Solution sol;
    string s ="anagram";
    string t = "nagaramm";
    bool isAnagram = sol.isAnagram(s,t);
    if(isAnagram== true){
        cout<<"It is an anagram"<<endl;
    }
    else{
        cout<<"It is not an anagram"<<endl;
    }
    return 0;
}