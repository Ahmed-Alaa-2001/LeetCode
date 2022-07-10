class Solution {
typedef long long ll;
ll dp[100005];
public:
    bool solve(ll i,vector<int>& a){
        if(i==a.size()-1)return dp[i]=true;
        else if(i>=a.size())return false;
        if(dp[i]!=-1)return dp[i];
        for(int j=1;j<=a[i];j++)if(solve(i+j,a)) return dp[i]=true;
        return dp[i]=false;
    }
    bool canJump(vector<int>& a) {
        memset(dp,-1,sizeof dp);
        return solve(0,a);
    }
};