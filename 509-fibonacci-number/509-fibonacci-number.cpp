class Solution {
typedef long long ll;
int dp[500];
public:
    ll DP(int n){
        if(n<=1)return n;
        int &ret=dp[n];
        if(ret!=-1)return ret;
        ret=DP(n-1)+DP(n-2);
        return ret;
    }
    int fib(int n) {
        memset(dp,-1,sizeof dp);
        return DP(n);
    }
};