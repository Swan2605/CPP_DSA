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
        cout << std::endl;
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for(int i =0; i<n; i++){
            for(int j=i+1; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i =0 ; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    
        
    }
};
int main(){
    Solution sol;
    vector<vector<int>> mat={{1,2,3},{4,5,6},{7,8,9}};
    sol.printMatrix(mat);
    cout<<endl;
    sol.rotate(mat);

    sol.printMatrix(mat);
    
   
    return 0;
}