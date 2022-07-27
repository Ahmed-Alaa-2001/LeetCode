class Solution {
public:
    bool isPerfectSquare(int n) {
        long long l=0,r=214748347,md;
        while(r-l!=1){
            md=l+(r-l)/2;
            if(n<=md*md)r=md;
            else l=md;
        }
        cout<<r<<'\n';
        if(r*r==n)return 1;
        else return 0;
    }
};