class Solution {
typedef long long ll;
ll dp[30][30][30];
ll solve(ll p,ll l,ll r,vector<int>& a){
    if(p<l||p>r)return 0;
    ll &ret=dp[l][r][p];
    if(~ret)return ret;
    ll left1=solve(l+2,l+2,r,a)+a[l];
    ll left2=solve(l+1,l+1,r-1,a)+a[l];
    ll right1=solve(r-2,l,r-2,a)+a[r];
    ll right2=solve(r-1,l+1,r-1,a)+a[r];
//    return ret=max({left1,left2,right1,right2});
    return ret=max(min(left1,left2),min(right1,right2));
    
}
public:
    bool PredictTheWinner(vector<int>& a) {
        memset(dp,-1,sizeof dp);
        ll sum=0;
        for(auto it:a)sum+=it;
        ll player1=solve(0,0,a.size()-1,a);
        cout<<player1<<'\n';
        if(sum-player1>player1)return false;
        else return true;
    }
};