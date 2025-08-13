#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mpp;
        vector<vector<string>> ans;
        for(string st: strs){
            string key = st;
            sort(key.begin(), key.end());
            mpp[key].push_back(st);

        }
        for(auto &val: mpp){
            ans.push_back(move(val.second));
        }
        return ans;
    }
};
int main(){
    Solution sol;
    vector<string> stringss ={"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> isGroupAnagram = sol.groupAnagrams(stringss);
    cout << "Grouped Anagrams are: " << endl;
    for (const auto& group : isGroupAnagram) {
        cout << "[ ";
        for (const auto& str : group) {
            cout << str << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}