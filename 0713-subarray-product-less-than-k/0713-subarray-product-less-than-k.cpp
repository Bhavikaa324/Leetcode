class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0;

        int n = nums.size();
        int start = 0, prod = 1, count = 0;

        for (int end = 0; end < n; end++) {
            prod *= nums[end];

            while (prod >= k && start <= end) {
                prod /= nums[start];
                start++;
            }

            count += (end - start + 1);
        }

        return count;
    }
};
