class Solution {
typedef long long ll;
int dp[500];
public:
    ll solve(int n){
        if(n<=1)return n;
        int &ret=dp[n];
        if(ret!=-1)return ret;
        ret=solve(n-1)+solve(n-2);
        return ret;
    }
    int fib(int n) {
        memset(dp,-1,sizeof dp);
        return solve(n);
    }
};