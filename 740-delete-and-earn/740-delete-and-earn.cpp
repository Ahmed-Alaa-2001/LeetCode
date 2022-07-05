class Solution {
typedef long long ll;
ll dp[100000];
map<ll,ll>mp;
public:
    ll solve(ll i){
        if(i<=0)return 0;
        ll &ret=dp[i];
        if(ret!=-1)return ret;
        ll leave=0,take=i*mp[i];
        if(i>=2)take+=solve(i-2);
        leave=solve(i-1);
        return ret=max(take,leave);
    }
    int deleteAndEarn(vector<int>& a) {
        memset(dp,-1,sizeof dp);
        for(auto it:a)mp[it]++;
        ll mx=*max_element(a.begin(),a.end());
        return solve(mx);
    }
};