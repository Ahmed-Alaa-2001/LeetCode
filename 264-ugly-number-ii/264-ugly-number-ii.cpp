class Solution {
typedef long long ll;
public:
    set<ll>s;
    void solve(ll num){
        if(num>=INT_MAX)return;
        if(s.find(num)!=s.end())return;
        s.insert(num);
        solve(num*2);
        solve(num*3);
        solve(num*5);
    }
    int nthUglyNumber(int n) {
        ll ans=n;
        solve(1);
        for(auto i:s){
            n--;
            if(!n)ans=i;
        }
        return ans;
    }
};