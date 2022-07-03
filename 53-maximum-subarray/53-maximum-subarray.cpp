class Solution {
    typedef long long ll;
public:
    int maxSubArray(vector<int>& a) {
        ll vl=a[0],mx=a[0];
        for(ll i=1;i<a.size();i++){
            if(vl+a[i]<a[i])vl=a[i];
            else vl+=a[i];
            mx=max(mx,vl);
        }
        return mx;
    }
};