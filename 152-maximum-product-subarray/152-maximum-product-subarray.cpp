class Solution {
//int dp[200][200];
map<int,map<int,int>>dp;
int mx=INT_MIN;
public:
    int solve(int i,vector<int>& a,int mul){
        if(i==a.size()-1)return max(mx,a[i]*mul);
        if(dp[i][mul]!=0)return dp[i][mul];
        int option1=solve(i+1,a,mul*a[i]);
        int option2=solve(i+1,a,1);
        mx=max({mx,option1,option2,a[i]*mul});
        return dp[i][mul]=mx;
    }
    int maxProduct(vector<int>& a) {
       // memset(dp,-1,sizeof dp);
        if(a.size()==1)return a[0];
        return solve(0,a,1);
    }
};