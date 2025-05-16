class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int unique = 0;
        for (int i = 0; i < nums.size(); i++) {
            unique ^= nums[i]; 
        }
        return unique;
    }
};
