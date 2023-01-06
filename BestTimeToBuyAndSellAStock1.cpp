#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int profit = 0;
        int maxProfit = 0;
        int minSoFar = prices[0];

        for(int i = 0; i < prices.size(); i++) {
            minSoFar = min(minSoFar, prices[i]);
            profit = prices[i] - minSoFar;
            maxProfit = max(maxProfit, profit);
        }
        return maxProfit;

        // int min = 999999;
        // int max = 0;

        // for(int i = 0; i < prices.size(); i++) {
        //     if(prices[i] <= min) min = prices[i];
        //     if(prices[i] - min >= max) max = prices[i] - min;
        // } return max;
    }
};