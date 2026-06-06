class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        
        for(int i=0;i<n;i++){
            int lsum=0,rsum=0;
            for(int j=0;j<i;j++){
                lsum += nums[j];
            }
            for(int j=i+1;j<n;j++){
                rsum += nums[j];
            }
            ans[i]=abs(lsum - rsum);
        }
        return ans;
    }
};