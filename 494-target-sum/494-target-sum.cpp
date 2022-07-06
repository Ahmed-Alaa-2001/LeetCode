class Solution {
typedef long long ll;
ll dp[100][100];
public:
    ll solve(ll i,ll t,vector<int>& a){
        if(i==a.size()&&!t)return 1;
        if(i==a.size())return 0;
       // ll &ret=dp[i][t];
       // if(~ret)return ret;
        ll option1=solve(i+1,t-a[i],a);
        ll option2=solve(i+1,t-a[i]*-1,a);
        return option1+option2;
        
    }
    int findTargetSumWays(vector<int>& a, int t) {
        memset(dp,-1,sizeof dp);
        return  solve(0,t,a);
    }
};