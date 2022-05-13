class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        // brute Force
        // Time complexity O(n)
        // space complexity O(1)
        // int profit=0;
        // for(int i=0;i<prices.size();i++){
        //     for(int j=i;j<prices.size();j++){
        //         profit=max(prices[j]-prices[i],profit);
        //     }
        // }
        // return profit;
        
        
        int diff=0;
        int mini=INT_MAX;
        for(int i=0;i<prices.size();i++){
            mini=min(mini,prices[i]);
            diff=max(prices[i]-mini,diff);
        }
        return diff;
    }
};