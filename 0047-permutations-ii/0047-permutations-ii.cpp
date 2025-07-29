class Solution {
public:
    void backtrack(int ind,vector<int>& nums,vector<vector<int>>& output){
        int n=nums.size();
        if(ind==n){
            output.push_back(nums);
            return ;
        }

        unordered_set<int> visit;
        for(int i=ind;i<n;i++){
            if(visit.count(nums[i])) continue;
            visit.insert(nums[i]);
            swap(nums[ind],nums[i]);
            backtrack(ind+1,nums,output);
            swap(nums[ind],nums[i]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> output;
        sort(nums.begin(), nums.end());
        backtrack(0,nums,output);
        return output;
    }
};