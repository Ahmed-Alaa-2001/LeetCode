class Solution {
typedef long long ll;
ll dp[100005];
public:
    ll solve(ll i,vector<int>& a){
        if(i==a.size()-1)return 0;
        else if(i>=a.size())return 0;
        ll &ret=dp[i];
        if(~ret)return ret;
        ll mn=INT_MAX;
        for(int j=1;j<=a[i];j++)mn=min(mn,solve(i+j,a)+1);
        return ret=mn;
    }
    int jump(vector<int>& a) {
        memset(dp,-1,sizeof dp);
        return solve(0,a);
    }
};