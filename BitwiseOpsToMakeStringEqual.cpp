#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool makeStringsEqual(string s, string target) {
        int incr = 0, decr = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '1') {
                incr++;
            }
            if(target[i] == '1') {
                decr++;
            }
        }
        
        if(decr == 0) return s == target;
        else return incr > 0;
    }
};