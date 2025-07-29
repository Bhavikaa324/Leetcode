class Solution {
public:
    void backtrack(int ind,vector<int> nums, int target,vector<int>& ds, vector<vector<int>>& temp ){
        int n=nums.size();
         if(target==0){
                temp.push_back(ds);
                return;
            }
        if(ind==n){
           return;
        }

        if(nums[ind]<=target){
            ds.push_back(nums[ind]);
            backtrack(ind,nums,target-nums[ind],ds,temp);
            ds.pop_back();
        }
         backtrack(ind+1,nums,target,ds,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      vector<vector<int>> result;
      vector<int> temp;
      backtrack(0,candidates,target,temp,result);
      return result;
    }
};