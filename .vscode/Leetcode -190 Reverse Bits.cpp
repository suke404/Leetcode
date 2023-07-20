class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int newN = 0;
        for(int i = 0; i < 32; i++) {
            newN = newN << 1; // shift left by 1
            if((n & 1) > 0) { 
                // bitwise & > 0, if it is 1 and 0
                newN = newN ^ 1; // bitwise or 0 1
            }
            n = n >> 1; // right shift
        }
        return newN;
    }
};