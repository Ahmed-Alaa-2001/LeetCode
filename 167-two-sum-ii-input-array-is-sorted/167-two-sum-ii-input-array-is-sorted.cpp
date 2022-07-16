class Solution {
public:
    int solve(int i,int t,vector<int>& a){
        int l=i+1,r=a.size()-1,md;
        while(l<=r){
            md=(l+r)/2;
            if(a[md]+a[i]>t)r=md-1;
            else if(a[md]+a[i]<t)l=md+1;
            else{return md+1;}
        }
        return 0;
    }
    vector<int> twoSum(vector<int>& a, int t) {
        vector<int>b;
        for(int i=0;i<a.size();i++){
            int ans=solve(i,t,a);
            if(ans){
                b.push_back(i+1);
                b.push_back(ans);
                return b;
            } 
        }
        return b;
    }
};