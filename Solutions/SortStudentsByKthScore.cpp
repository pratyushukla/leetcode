#include <bits/stdc++.h>
using namespace std;

int i;
class Solution {
public:
    
    static bool lambdavec(const vector<int>& score1, const vector<int>& score2) {
        return score1[i] > score2[i];
    }
    
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        i = k;
        sort(score.begin(), score.end(), lambdavec);
        return score;
    }
};