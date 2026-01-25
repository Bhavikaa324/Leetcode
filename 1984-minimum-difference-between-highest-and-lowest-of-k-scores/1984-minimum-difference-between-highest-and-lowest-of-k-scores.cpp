class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        if (k==1) return 0;
        int ans=0,fans=INT_MAX;
        sort(nums.begin(),nums.end(),greater<int>());
        for(int i=0;i+k-1<n;i++){
                ans=nums[i]-nums[i+k-1];
            fans=min(fans,ans);
        }
        return fans;
    }
};