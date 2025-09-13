class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> freq;
        int sum=0,vowel=0,conso=0;
        int n=s.length();
        for(char ch:s){
            freq[ch]++;
        }
        for(auto &it: freq){
            char c = it.first;
            if(c=='a' ||c=='e' ||c=='i' ||c=='o' ||c=='u'){           
                vowel=max(vowel,it.second);
            }
            else{
                conso=max(conso,it.second);
            }
        }
    return vowel+conso;
    }
};