class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        mpp[0] = 1;
        int count = 0, sum = 0;

        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int remainder = (sum % k + k) % k;

            if (mpp.find(remainder) != mpp.end()) {
                count += mpp[remainder];
            }
            mpp[remainder]++;
        }
        return count;
    }
};
