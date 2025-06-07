class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double maxsum=0;
       
        for(int i=0;i<k;i++){
            maxsum += nums[i];
        }
         double windowsum=maxsum;
        for(int i=k;i<n;i++){
            windowsum += nums[i]-nums[i-k];
            maxsum=max(maxsum,windowsum);
        }
        return maxsum/k;
    }
};