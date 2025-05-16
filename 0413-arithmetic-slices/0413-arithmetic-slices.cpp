class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        if (n < 3) return 0; 

        int count=0,start=0;
        int diff1 = nums[1] - nums[0];
        for(int end=1;end<n-1;end++){
           int diff2 = nums[end + 1] - nums[end];

           if(diff1 == diff2) start++;
           else{
              diff1 = diff2;
                start = 0;

           } 
           count += start;
        }
        return count;
    }
};