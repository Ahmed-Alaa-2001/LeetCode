class Solution {
    int dp[1005][1005];
    public:
    int solve(int i,int j,string &s){
        if(i>=j)return 1;
        int &ret=dp[i][j];
        if(~ret)return ret;
        if(s[i]==s[j])return ret=solve(i+1,j-1,s);
        return ret=0;
    }
    string longestPalindrome(string s) {
        memset(dp,-1,sizeof dp);
        int mx=-1;
        int idx=-1;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                int l=j-i+1;
                if(solve(i,j,s)&&l>mx){
                    mx=l;idx=i;
                }
            }
        }
        return s.substr(idx,mx);
    }
};