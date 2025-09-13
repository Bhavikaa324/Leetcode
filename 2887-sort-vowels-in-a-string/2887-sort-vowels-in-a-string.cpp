class Solution {
public:
    string sortVowels(string s) {
        string ans="";
        int n=s.length();
        vector<char> vowel;
        for(int i=0;i<n;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                vowel.push_back(s[i]);
            }
        }
        sort(vowel.begin(),vowel.end());
        int m=0;
        for(int i=0;i<n;i++){
     if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
        ans+=vowel[m];
        m++;
     }
     else{
        ans+=s[i];
     }}
     return ans;
    }
};