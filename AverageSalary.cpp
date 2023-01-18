#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double average(vector<int>& salary) {
        double minSalary = *min_element(salary.begin(), salary.end());
        double maxSalary = *max_element(salary.begin(), salary.end());

        double sum = accumulate(salary.begin(), salary.end(), 0);
        return (sum - (minSalary + maxSalary)) / (salary.size() - 2);
    }
};