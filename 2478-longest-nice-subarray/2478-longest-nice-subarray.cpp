class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n = nums.size();
        int start = 0, bitwiseAnd = 0, max_len = 0;

        for (int end = 0; end < n; end++) {
            while ((bitwiseAnd & nums[end]) != 0) {
                bitwiseAnd ^= nums[start]; 
                start++;
            }

            bitwiseAnd |= nums[end];

            max_len = max(max_len, end - start + 1);
        }
        
        return max_len;
    }
};
