#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> candidates;
        backtrack(s, res, candidates, 0);
        return res;
    }
    void backtrack(string s, vector<vector<string>>& res, vector<string>& candidates, int start) {
        if(start == s.size()) {
            res.push_back(candidates); return;
        }
        for(int i = start; i < s.size(); i++) {
            string candidate = s.substr(start, i - start + 1);
            if(!isPalindrome(candidate)) continue;
            candidates.push_back(candidate);
            backtrack(s, res, candidates, i + 1);
            candidates.pop_back();
        }
    }
    bool isPalindrome(string s) {
        return equal(s.begin(), s.begin() + s.size() / 2, s.rbegin());
    }
};