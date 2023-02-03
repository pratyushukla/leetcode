#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans = 0;
        int prefixSum = 0;
        vector<int> count(k);
        count[0] = 1; //for when the array contains a single element which divides k
        for(int x : nums) {
            prefixSum = (prefixSum + x % k + k) % k;
            ans += count[prefixSum];
            count[prefixSum]++;
        }
        return ans;
    }
};