class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
       int longest=0,count=0;
       int ls=INT_MIN;
       sort(nums.begin(),nums.end());
       for(int i=0;i<n;i++){
        if(nums[i]-1 ==ls){
       count=count+1;
       ls=nums[i];
        }
        else if(nums[i]!= ls){
            count=1;
            ls=nums[i];
          
        }
        longest=max(longest,count);
       }
      return longest;  
    }
};