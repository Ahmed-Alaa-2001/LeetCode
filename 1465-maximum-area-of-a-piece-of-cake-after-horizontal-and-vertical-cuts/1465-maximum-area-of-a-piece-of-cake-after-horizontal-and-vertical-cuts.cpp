class Solution {
const int md=1e9+7;
public:
    int maxArea(int h, int w, vector<int>& a, vector<int>& b) {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int mxh=a[0],mxv=b[0];
        a.push_back(h);
        b.push_back(w);
        for(int i=1;i<a.size();i++)mxh=max(mxh,a[i]-a[i-1]);
        for(int i=1;i<b.size();i++)mxv=max(mxv,b[i]-b[i-1]);
        //return ((mxh*mxv*1LL)%md);
        return (int)((long)mxh*mxv % (md));
    }
};