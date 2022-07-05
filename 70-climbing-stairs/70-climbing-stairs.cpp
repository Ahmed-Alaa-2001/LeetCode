class Solution {
typedef long long ll;
int dp[50];
public:
    ll solve(int n){
        if(n<=1)return 1;
        int &ret=dp[n];
        if(ret!=-1)return ret;
        int option1=solve(n-1);
        int option2=solve(n-2);
        return ret=option1+option2;
    }
    int climbStairs(int n) {
        memset(dp,-1,sizeof(dp));
        return solve(n);
    }
};