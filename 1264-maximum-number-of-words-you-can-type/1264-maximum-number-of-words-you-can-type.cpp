class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int n=brokenLetters.length();
        int count=0;
        vector<string> words;
        istringstream stream(text);
        string word;
        while (stream>>word) {
            words.push_back(word);
        }
        int m=words.size();
        for(int i=0;i<m;i++){
            string cur=words[i];
            int o=cur.length();
            bool canType = true;
            for(int j=0;j<o;j++){
                for (int k=0;k<brokenLetters.length();k++){
                if(cur[j]==brokenLetters[k]){
                canType = false;
                break;
                }}
            if(!canType) break;
            }
            if(canType)
                count++;            
        }   
    return count;
    }
};