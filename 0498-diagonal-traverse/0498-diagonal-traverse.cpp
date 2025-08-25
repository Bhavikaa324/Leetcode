class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector<int> ans;
        int m=mat.size();
        int n=mat[0].size();
        int i=0,j=0;
        for(int sum=0;sum<m+n;sum++){
            vector<int> temp;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                    if(i+j == sum )
                    temp.push_back(mat[i][j]);
            }}
                    if(sum%2 ==0){
                        reverse(temp.begin(),temp.end());
                    }

                    for(int x: temp){
                            ans.push_back(x);
                    }
            }

    return ans;
    }
};