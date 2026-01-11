class Solution {
public:
    int longestSubstring(string s, int k) {
       int maxi=0;
        int n=s.length();
        for(int j=0;j<n;j++){
            map<char,int> temp;
        for(int i=j;i<n;i++){
            temp[s[i]]++;
        
        bool ok=true;
        for(auto it:temp){
            if(it.second<k) {
                ok=false;
                break;
            }}
        if(ok)
        maxi=max(maxi,i-j+1);
     
        }
    }
    return maxi;
    }
};