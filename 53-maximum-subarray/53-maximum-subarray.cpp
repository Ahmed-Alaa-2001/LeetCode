class Solution {
typedef long long ll;
public:
    int maxSubArray(vector<int>& a) {
        ll sum=a[0],mx=a[0];
        for(ll i=1;i<a.size();i++){
            if(sum+a[i]<a[i])sum=a[i];
            else sum+=a[i];
            mx=max(mx,sum);
        }
        return mx;
    }
};