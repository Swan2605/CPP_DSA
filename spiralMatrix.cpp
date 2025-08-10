#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

class Solution {
public:

//used gpt for this additional
    void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (const auto& elem : row) {
            cout << elem << "\t";
        }
        cout << endl;
        }
    }
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m= mat.size(), n=mat[0].size();
        int sr =0, er=m-1, sc=0, ec= n-1;
        vector<int> ans;

        while(sr<= er && sc<= ec){
            for(int j =sc ; j<=ec; j++){
                ans.push_back(mat[sr][j]);
            }
            for(int i= sr+1 ; i<=er; i++){
                ans.push_back(mat[i][ec]);
            }
            for(int j= ec-1; j>=sc; j--){
                if(sr == er){
                    break;
                }
                ans.push_back(mat[er][j]);
            }
            for(int i=er-1; i>= sr+1; i--){
                if(sc == ec){
                    break;
                }
                ans.push_back(mat[i][sc]);
            }
            sr++; er--; sc++; ec--;
        }
        return ans;
    }
};
int main(){
    Solution sol;
    vector<vector<int>> mat={{1,2,3},{4,5,6},{7,8,9}};
    
    cout<<endl;
    sol.spiralOrder(mat);

    sol.printMatrix(mat);
    
   
    return 0;
}