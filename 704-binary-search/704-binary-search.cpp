class Solution {
public:
    int search(vector<int>& a, int target) {
        int md,l=0,r=a.size()-1;
        while(l<=r){
            md=(l+r)/2;
            if(a[md]==target)return md;
            if(a[md]>target){
                r=md-1;
            }
            else l=md+1;
        }
        return -1;
    }
};