class Solution {
typedef long long ll;
int dp[500];
public:
    ll solve(ll i,ll n,vector<int>& a){
        if(i>=n)return 0;
        int &ret=dp[i];
        if(ret!=-1)return ret;
        ll mx;
        mx=max(solve(i+1,n,a),solve(i+2,n,a)+a[i]);
        return ret=mx;
    }
    int rob(vector<int>& a) {
        memset(dp,-1,sizeof(dp));
        if(a.size()==1)return a[0];
        ll ans=0;
        ans=max(ans,solve(0,a.size()-1,a));
        memset(dp,-1,sizeof(dp));
        ans=max(ans,solve(1,a.size(),a));
        return ans;
    }
};