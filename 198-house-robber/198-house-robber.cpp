class Solution {
typedef long long ll;
int dp[500];
public:
    ll solve(ll i,vector<int>& a){
        if(i>=a.size())return 0;
        int &ret=dp[i];
        if(ret!=-1)return ret;
        ll mx;
        mx=max(solve(i+1,a),solve(i+2,a)+a[i]);
        return ret=mx;
    }
    int rob(vector<int>& a) {
        memset(dp,-1,sizeof dp);
        return solve(0,a);
    }
};