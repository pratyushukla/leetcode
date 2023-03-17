class Solution {
public:
    int arraySign(vector<int>& nums) {
        int neg=0;
        for(int n:nums){
            if(n==0) return 0;
            neg+=n<0 ?1:0;
        }
        return neg&1?-1:1;
    }
};
