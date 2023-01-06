#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeroes = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                nums[zeroes] = nums[i];
                zeroes++;
            }
        }
        for(; zeroes < nums.size(); zeroes++) {
            nums[zeroes] = 0;
        }
    }
};