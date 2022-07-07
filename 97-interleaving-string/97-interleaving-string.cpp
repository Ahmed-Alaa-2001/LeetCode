class Solution {
typedef long long ll;
ll dp[205][205][205];
public:
    ll solve(ll i,ll j,ll k,string &s1,string &s2,string &s3){
        if(i==s1.size()&&j==s2.size()&&k==s3.size())return true;
        if(i>s1.size()||j>s2.size())return false;
        ll &ret=dp[i][j][k];
        if(~ret)return ret;
        //if(s1[i]!=s3[k]&&s2[j]!=s3[k])return false;
        if(s1[i]==s3[k] && s2[j]==s3[k]){
            ret= (solve(i+1,j,k+1,s1,s2,s3) || solve(i,j+1,k+1,s1,s2,s3));
        }
        else if(s1[i]==s3[k])ret=solve(i+1,j,k+1,s1,s2,s3);
        else if(s2[j]==s3[k])ret=solve(i,j+1,k+1,s1,s2,s3);
        else return false;
        return ret;
    }
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.size()+s2.size()!=s3.size())return false;
        memset(dp,-1,sizeof dp);
        return solve(0,0,0,s1,s2,s3);
    }
};