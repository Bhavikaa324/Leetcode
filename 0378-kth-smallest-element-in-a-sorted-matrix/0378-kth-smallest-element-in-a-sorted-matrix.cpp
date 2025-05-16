class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        vector<int> result;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                result.push_back(matrix[i][j]);
            }
        }
        sort(result.begin(),result.end());
        int ans=result[k-1];
        return ans;
    }
};