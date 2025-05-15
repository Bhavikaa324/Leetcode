class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> ans;
        unordered_map<int, int> map;
        for (int i=0;i<n;i++) {
            map[nums[i]]++;
        }

        vector<pair<int, int>> freqVec(map.begin(), map.end());

         sort(freqVec.begin(), freqVec.end(), [](pair<int, int>& a, pair<int, int>& b) {
            return a.second > b.second; 
        });

       for(int j=0;j<k;j++){
         ans.push_back(freqVec[j].first);
       }
    return ans;
    }
};