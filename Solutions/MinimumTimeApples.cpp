#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> adj[100005];
    vector<bool> apples;

    pair<int,int> dfs(int node, int parent) {
        pair<int,int> timeTaken = {0, apples[node]};
        for(auto i : adj[node]) {
            if(i != parent) {
                auto x = dfs(i, node);
                timeTaken.first += (2 + x.first) * x.second;
                timeTaken.second |= x.second;
            }
        }
        return timeTaken;
    }

    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        for(int i = 0; i < (int)edges.size(); i++) {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        apples = hasApple;
        return dfs(0,0).first;
    }
};