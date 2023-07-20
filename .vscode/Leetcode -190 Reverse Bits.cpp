class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int newN = 0;
        for(int i = 0; i < 32; i++) {
            newN = newN << 1;
            if((n & 1) > 0) {
                newN = newN ^ 1;
            }
            n = n >> 1;
        }
        return newN;
    }
};