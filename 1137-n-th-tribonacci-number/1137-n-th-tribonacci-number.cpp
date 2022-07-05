class Solution {
typedef long long ll;
int dp[500];
public:
   ll DP(int n){
        if(n==2||n==1)return 1;
        if(n==0)return 0;
        int &ret=dp[n];
        if(ret!=-1)return ret;
        ret=DP(n-1)+DP(n-2)+DP(n-3);
        return ret;
    }
    int tribonacci(int n) {
        memset(dp,-1,sizeof dp);
        return DP(n);
    }
};