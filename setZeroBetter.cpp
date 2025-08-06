#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

class Solution {
public:

    void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (const auto& elem : row) {
            cout << elem << "\t";
        }
        cout << std::endl;
        }
    }
    void setZeroes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
       
        int row[n] ={0};
        int col[m] = {0};

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j] == 0){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        for(int i =0; i<n; i++){
            for(int j=0; j<m; j++){
                if(row[i] || col[j]){
                    mat[i][j] = 0;
                }
            }
        }
    }
};

int main(){
    Solution sol;
    vector<vector<int>> mat={{0,1,2,0},{3,4,5,2},{1,3,1,5}};

    sol.printMatrix(mat);
    cout<<endl;
    sol.setZeroes(mat);

    sol.printMatrix(mat);
    
   
    return 0;
}