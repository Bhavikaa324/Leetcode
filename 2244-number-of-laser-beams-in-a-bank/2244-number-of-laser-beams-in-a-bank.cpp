class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>cnt;
        int sum=0;
         int ans=0;
        int count=0;
        int n=bank.size();
        int m=bank[0].size();
        for(int i=0;i<n;i++){
            count=0;
            for(int j=0;j<m;j++){
                if(bank[i][j]=='1'){
                count++;
                }
            }
            if(count!=0){
                cnt.push_back(count);
            }
           
           
        }
         for(int i=1;i<cnt.size();i++){
                ans=ans+(cnt[i-1]*cnt[i]);
            }
        return ans;
    }
};