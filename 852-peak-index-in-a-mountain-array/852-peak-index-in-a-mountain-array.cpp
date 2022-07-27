class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        int mx=a[0],ans=0;
        for(int i=1;i<a.size();i++){
            if(a[i]>mx){
                ans=i;
                mx=a[i];
            }
        }
        return ans;
    }
};