class Solution {
public:
    int minSteps(string s, string t) {
       int n=s.length();
       int count=0;
       unordered_map<char,int> mpp1;
       unordered_map<char,int> mpp2;
       for(int i=0;i<n;i++){
        mpp1[s[i]]++;
        mpp2[t[i]]++;
       }
       for(auto it:mpp1){
        char c=it.first;
        int fs=it.second;
        int ft=mpp2[c];
        if(fs>ft) count+=(fs-ft);
       }
    return count;
    }
};