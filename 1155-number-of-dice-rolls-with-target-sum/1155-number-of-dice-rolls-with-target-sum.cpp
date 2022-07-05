class Solution {
typedef long long ll;
int dp[2000][2000];
const ll md = 1e9+7;
public:
    ll solve(int n,int k,int t){
        if(n==0&&t==0) return 1;
        if(n==0||t==0) return 0;
        int &ret=dp[n][t];
         if(ret!=-1) return ret;
        ll sum=0;
        for(int i=1;i<=k;i++){
            if(i<=t){
                sum+=solve(n-1,k,t-i);
            }
        }
        ret=sum%md;
        return ret%md;
    }
    int numRollsToTarget(int n, int k, int t) {
        memset(dp,-1,sizeof(dp));
        return solve(n,k,t);
    }
};