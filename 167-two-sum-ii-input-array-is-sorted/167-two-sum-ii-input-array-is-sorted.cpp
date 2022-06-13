class Solution {
public:
    int bin(int i,vector<int>& numbers, int target){
        int l=i+1,r=numbers.size()-1,md;
        while(l<=r){
            md=(l+r)/2;
            if(numbers[md]+numbers[i]<target)l=md+1;
            else if(numbers[md]+numbers[i]>target)r=md-1;
            else return md;
        }
        return md;
    }

    vector<int> twoSum(vector<int>& numbers, int target) {
        int ans,i;
        vector<int>a;
        for(i=0;i<numbers.size();i++){
            ans=bin(i,numbers,target);
            if(numbers[ans]+numbers[i]==target){a.push_back(i+1);a.push_back(ans+1);break;}
        }
        return a;
    }
};