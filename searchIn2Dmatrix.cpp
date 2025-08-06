#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchInRow(vector<vector<int>>& mat, int target, int row){
        int n = mat[0].size();
        int st =0, e = n-1;

        while(st<= e){
            int mid = st + (e- st)/2;
            if(target == mat[row][mid]){
                return true;
            }
            else if(target < mat[row][mid]){
                e = mid -1;
            }
            else{
                st = mid+1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m = mat.size(), n= mat[0].size();
        int startR =0, endR= m-1;

        while(startR <= endR){
            int midR= startR + (endR-startR)/2;
            if(target >= mat[midR][0] && target <= mat[midR][n-1]){
                return searchInRow(mat, target, midR);
            }
            else if(target< mat[midR][0]){
                endR= midR-1;
            }
            else{
                startR= midR+1;
            }

        }
        return false;
    }
};

int main(){
    Solution sol;
    vector<vector<int>> matrix={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target= 3;
    bool result = sol.searchMatrix(matrix, target);

    
    cout<<"Target found? "<<result<<endl;
    
   
    return 0;
}