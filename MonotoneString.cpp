#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int oneCount = 0, flipCount = 0;
        int i = 0;
        while(i < s.length() && s[i] == '0'){
            i++;
        }
        for( ; i < s.length(); i++) {
            char temp = s[i];
            if(temp == '0') flipCount++;
            else oneCount++;
            if(flipCount > oneCount) flipCount = oneCount;
        }
        return flipCount;
    }
};