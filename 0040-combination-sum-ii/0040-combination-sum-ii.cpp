class Solution {
public:
    void backtrack(int ind,vector<int>& nums, int target,vector<int>& ds, vector<vector<int>>& temp ){
        int n=nums.size();
         if(target==0){
                temp.push_back(ds);
                return;
            }

        for(int i=ind;i<n;i++){
            if(i>ind && nums[i]==nums[i-1]) continue;
            if(nums[i]>target) break;
            ds.push_back(nums[i]);
            backtrack(i+1,nums,target-nums[i],ds,temp);
            ds.pop_back();
        }

       
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
      vector<vector<int>> result;
      vector<int> temp;
      sort(candidates.begin(),candidates.end());
      backtrack(0,candidates,target,temp,result);
      return result;
    }
};