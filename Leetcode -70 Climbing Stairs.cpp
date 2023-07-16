class Solution {
public:
    int climbStairs(int n) {
        if(n < 2) return 1;
        else if(n == 2) return 2;
        int pre_pre_stair = 1;
        int pre_stair = 2;
        int output = 0;
        for(int i = 3; i <= n; i++)
        {
            output = pre_pre_stair + pre_stair;
            pre_pre_stair= pre_stair;
            pre_stair = output;
        }
        return output;
    }
};