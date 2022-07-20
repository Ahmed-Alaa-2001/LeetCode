class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        int j=0,idx=0;
        string t;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){v.push_back(t);t.clear();continue;}
            t+=s[i];
        }
        v.push_back(t);
        t.clear();
        for(auto it:v){
            for(int j=it.size()-1;j>=0;j--){
                cout<<it[j];
                t+=it[j];
                idx++;
            }
            if(idx!=s.size())t+=' ';
            idx++;
            cout<<' ';
        }
        return t;
    }
};