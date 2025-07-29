#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:

    int maximumProfit(vector<int>& prices){

        if(prices.empty()){
            return 0;
        }

        int mini = prices[0];
        int n= prices.size();
        int maxProfit =0;

        for(int i =1; i<n; i++){
            int cost=  prices[i] - mini;
            maxProfit= max(maxProfit, cost);
            mini = min(mini, prices[i]);
        }
        return maxProfit;
    }
};

int main(){
    Solution sol;
    vector<int> stockPrice ={7,1,5,3,6,4};

    int profit = sol.maximumProfit(stockPrice);
    cout<<"Max profit : "<< profit << endl;
    return 0;

}