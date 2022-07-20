class Solution {
public:
int lengthOfLongestSubstring(string s) {
        int n=s.size(),maxi=0;
        map<char,int>m;
            int t=0,i=0;
        for(i=0;i<n;i++){
            if(m.count(s[i])&&m[s[i]]>=t){
                maxi=max(maxi,i-t);
                t=m[s[i]]+1;
                m.erase(s[i]);
                m[s[i]]=i;
            }
            else{
                m[s[i]]=i;
            }
        }
        
        return maxi>i-t?maxi:i-t;
    }
};