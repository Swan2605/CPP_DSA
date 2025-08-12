#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i =0,j=0;
        vector<int> nums3;
        int n1= nums1.size(), n2=nums2.size();
        int n= n1+n2;
        while(i<n1 && j<n2){
            if(nums1[i]<nums2[j]) nums3.push_back(nums1[i++]);
            else nums3.push_back(nums2[j++]);

        }
        while(i<n1) nums3.push_back(nums1[i++]);
        while(j<n2) nums3.push_back(nums2[j++]);

        if(n%2==1){
             return nums3[n/2];
        }
       
        
       return double(nums3[n/2] + nums3[(n/2)-1])/2;
    }
};

int main(){
    Solution sol;
    vector<int> mat1={1,2};
    vector<int>mat2={3,4};
    double med2sortedA;
    med2sortedA= sol.findMedianSortedArrays(mat1, mat2);
    cout<<"Median of 2 sorted array  is : "<<med2sortedA; 
   
    return 0;
}