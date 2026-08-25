class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_set<int> seen(nums.begin(),nums.end());
        int mul=k;
        while(seen.count(mul)){
            mul+=k;
        }
        return mul;
    }
};