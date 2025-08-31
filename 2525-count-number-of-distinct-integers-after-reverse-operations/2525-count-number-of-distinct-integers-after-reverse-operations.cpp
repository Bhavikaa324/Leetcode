class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
       vector<int> ans;
       int count=0;
       int n=nums.size();
       for(int i=0;i<n;i++){
        ans.push_back(nums[i]);
       } 
    
       for(int i=0;i<n;i++){
      int m=nums[i];
        int rev=0;
        while(m>0){
            int sum=m%10;
            rev=rev*10+sum;
            m=m/10;
        }
        ans.push_back(rev);     
       }
    unordered_set<int> s;
    for(int i=0;i<ans.size();i++){
       if (s.find(ans[i]) == s.end()) {
            s.insert(ans[i]);
            count++;
        }

    }
return count;

    }
};