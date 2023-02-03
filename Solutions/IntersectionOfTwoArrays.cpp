#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       unordered_set<int> intersect(nums1.begin(), nums1.end());
        vector<int> res;
        for (auto x : nums2)
            if (intersect.count(x)) {
                res.push_back(x);
                intersect.erase(x);
            }
        return res;
       
   }
};