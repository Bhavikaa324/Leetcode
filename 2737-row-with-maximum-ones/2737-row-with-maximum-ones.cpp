class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int m=mat[0].size();
        int n=mat.size();
        int count=0;
        int countmax=0;
        int rowIndex;
        for(int i=0;i<n;i++){
            count=0;
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                    count++;
                }
            }

            if(count>countmax){
                rowIndex=i;
                countmax=count;
            }
            if(count == countmax){
                rowIndex=min(rowIndex,i);
                countmax=count;
            }
  
        }
        return {rowIndex,countmax};
    }
};