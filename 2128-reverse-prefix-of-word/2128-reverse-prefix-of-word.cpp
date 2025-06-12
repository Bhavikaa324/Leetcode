class Solution {
public:
    string reversePrefix(string word, char ch) {
        if(word.find(ch)==-1)
        return word;
        int j=0;
        while(word[j]!=ch){
            j++;
        }
        reverse(word.begin(),word.begin()+j+1);
        return word;
    }
};