class Solution {
public:
    int dp[50000][2];
    int solve(int i,int buy,vector<int>&a,int fee){        
        if(i>=a.size()) return 0;
        int &ret=dp[i][buy];
        if(~ret)return ret;
        if(buy==0){
            int buyy=solve(i+1,1,a,fee)-a[i];
            int notbuy=solve(i+1,0,a,fee);
            ret=max(buyy,notbuy);
        }
        if(buy==1){
            int sell=solve(i+1,0,a,fee)+a[i]-fee;
            int notsell=solve(i+1,1,a,fee);
            ret=max(sell,notsell);
        }
        return ret;
    }
    int maxProfit(vector<int>& prices, int fee) {
        memset(dp,-1,sizeof dp);
        return solve(0,0,prices,fee);
    }
};