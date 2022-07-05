class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        if(a.empty())return 0;
        sort(a.begin(),a.end());
        int c=1;
        int mx=1;
        for(int i=1;i<a.size();i++){
            if(a[i]==a[i-1])continue;
            if(a[i]-a[i-1]==1)c++;
            else{
                mx=max(mx,c);
                c=1;
            }
        }
        mx=max(mx,c);
        return mx;
    }
};