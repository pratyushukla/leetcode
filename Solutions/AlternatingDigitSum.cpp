#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0;
        int digits = floor(log10(n) + 1);
        while(n != 0) {
            if(digits % 2 == 0) {
                sum += -(n % 10);
            }
            else{
                sum += (n % 10);
            }
            n /= 10;
            digits--;
        }
        return sum;
    }
};