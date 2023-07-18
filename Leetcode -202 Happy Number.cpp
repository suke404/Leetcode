class Solution {
private:
    int nextNumber(int n){
        int next_number = 0;
        while(n!=0){
            int d = n%10;
            next_number += d*d;
            n = n/10;
        }
        return next_number;
    }
public:
    bool isHappy(int n) {
        while( n!= 1 && n != 4)
            n = nextNumber(n);
        
        return n == 1;
    }
};