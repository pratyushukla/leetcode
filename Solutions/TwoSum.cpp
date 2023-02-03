#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> visited;
        for(int i = 0, n = nums.size(); i < n; ++i) {
            if(visited.count(target - nums[i]))
                return {visited[target - nums[i]], i};
            visited[nums[i]] = i;
        }
        return {0, 1};
    }
};