#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(auto x : nums) {
            res ^= x;
        }
        return res;
        // set<int> s;
        // for(auto x : nums){
        //     s.insert(x);
        // }
        // int arrSum = accumulate(nums.begin(), nums.end(), 0);
        // int setSum = accumulate(s.begin(), s.end(), 0);

        // return 2 * setSum - arrSum;
    }
};