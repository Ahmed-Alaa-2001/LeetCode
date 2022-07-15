class Solution {
public:
    int dp[10000][2];
    int solve(int i,int buy,vector<int>&a){        
        if(i>=a.size()) return 0;
        int &ret=dp[i][buy];
        if(~ret)return ret;
        if(buy){
            int choose1=solve(i+1,0,a)-a[i];
            int choose2=solve(i+1,1,a);
            ret=max(choose1,choose2);
        }
        if(!buy){
            int choose3=solve(i+2,1,a)+a[i];
            int choose4=solve(i+1,0,a);
            ret=max(choose3,choose4);
        }
        return ret;
    }
    int maxProfit(vector<int>& prices) {
        memset(dp,-1,sizeof dp);
        return solve(0,1,prices);
    }
};