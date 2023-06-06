//TC:O(n)
//SC:O(1)
#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int mini=prices[0];
    int profit=0;

    for(int i=1;i<prices.size();i++){
        mini=min(prices[i],mini);
        profit=max(profit,prices[i]-mini);
    }
    return profit;
    // Write your code here.
}
