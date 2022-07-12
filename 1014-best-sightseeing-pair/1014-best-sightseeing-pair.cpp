class Solution {
int dp[50005];
public:

    int maxScoreSightseeingPair(vector<int>& a) {
        int mx=a[0],ans=INT_MIN,i=0;
        for(int j=1;j<a.size();j++){
            ans=max(ans,mx+a[j]+i-j);
            if(mx+i-j<a[j]){
                mx=a[j];
                i=j;
            }
        }
        return ans;
    }
};