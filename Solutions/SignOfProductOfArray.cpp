class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long product = 1;
        for(auto& x : nums) product = (product % 1000000007) * x;
        if(product < 0) return -1;
        else if(product == 0) return 0;
        else return 1;
    }
};
