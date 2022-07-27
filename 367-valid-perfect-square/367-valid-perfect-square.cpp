class Solution {
public:
    bool isPerfectSquare(int n) {
        int sq=sqrt(n);
        if(sq*sq*1.0==n){
            return 1;
        }
        return 0;
    }
};