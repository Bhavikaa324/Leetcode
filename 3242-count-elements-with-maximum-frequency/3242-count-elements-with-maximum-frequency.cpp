class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        map<int,int> freq;
        int maxi=0;
        int count=0;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for(auto& it:freq){
            int p=it.second;
            maxi=max(maxi,p);
        }
        for(auto& it:freq){
            int m=it.second;
            if(m == maxi) count += m;
        }
        return count;
    }
};