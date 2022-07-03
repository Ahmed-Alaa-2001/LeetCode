class Solution {
typedef long long ll;
public:
    bool containsDuplicate(vector<int>& a) {
        map<ll,ll>mp;
        for(auto it:a){
            if(mp[it])return true;
            mp[it]=1;
        }
        return false;
    }
};