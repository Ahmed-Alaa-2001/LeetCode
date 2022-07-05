class Solution {
typedef long long ll;
int dp[5000];
public:
    ll solve(ll i,vector<int>& a){
        if(i>=a.size())return 0;
        int &ret=dp[i];
        if(ret!=-1)return dp[i];
        int option1=solve(i+1,a)+a[i];
        int option2=solve(i+2,a)+a[i];
        return dp[i]=min(option1,option2);
    }
    int minCostClimbingStairs(vector<int>& a) {
        memset(dp,-1,sizeof dp);
        return min(solve(0,a),solve(1,a));
    }
};