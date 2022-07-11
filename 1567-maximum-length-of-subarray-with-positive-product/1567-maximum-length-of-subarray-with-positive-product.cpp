class Solution {
//int dp[200][200];
map<int,map<int,int>>dp;
int mx=INT_MIN;
public:
   int getMaxLen(vector<int>& nums) {
        int n=nums.size();
        int pos=0;  
        int neg=0;   
        int ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                pos=0;
                neg=0;
            }
            else if(nums[i]>0){
                pos+=1;
                if(neg!=0) neg+=1;
            }
            else{
                int temp=neg;
                neg=pos+1;
                if(temp==0) pos=0;
                else pos=temp+1;
            }
            ans=max(ans,pos);
        }
        return ans;
        
    }
};