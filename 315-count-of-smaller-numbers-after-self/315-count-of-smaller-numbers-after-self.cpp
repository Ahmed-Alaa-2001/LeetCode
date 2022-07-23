#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update> set_t;
class Solution {
public:
    vector<int> countSmaller(vector<int>& a) {
        vector<int>v2(a.size());
        set_t s;
        for(int i=a.size()-1;i>=0;i--){
            v2[i]=s.order_of_key({a[i],-1});
            s.insert({a[i],a.size()-i});
        }
        return v2;

    }
};