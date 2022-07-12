class Solution {
public:
    int searchInsert(vector<int>& a, int target) {
        return lower_bound(a.begin(),a.end(),target)-a.begin();
    }
};