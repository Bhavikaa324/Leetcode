class Solution {
public:
    vector<vector<int>> subsets(vector<int>& arr) {
    int n = arr.size();
    vector<vector<int>> res;
    set<vector<int>> set;
    sort(arr.begin(), arr.end());
    int total = 1 << n;

    for (int i = 0; i < total; i++) {
        vector<int> subset;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                subset.push_back(arr[j]);
            }
        }
        set.insert(subset);
    }
    for (auto it : set) {
        res.push_back(it);
    }
    
    return res;
    }
};