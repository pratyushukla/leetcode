#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        //int total_len = nums1.size() + nums2.size();
        int i = 0, j = 0;
        while(i < nums1.size() && j < nums2.size()) {
            if(nums1[i] == nums2[j])
                return nums1[i];
            else if(nums1[i] < nums2[j])
                i += 1;
            else
                j += 1;
        } return -1;
    }
};