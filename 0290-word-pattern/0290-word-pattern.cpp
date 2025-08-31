class Solution {
public:
    bool wordPattern(string pattern, string s) {
        int n=pattern.length();
        unordered_map<char,string> mpp;
        unordered_map<string,char>rev;

        stringstream ss(s);
        string word;
    vector<string> words;
    while (ss >> word) {
        words.push_back(word);
    }

    if (pattern.size() != words.size()) return false;

        for(int i=0;i<n;i++){
            char m=pattern[i];
            string w=words[i];

            auto it = mpp.find(m);
            if(it != mpp.end()){
                if(it->second != w)
                return false;
            }
            else{
                mpp[m] = w;   
            }
            auto it1 = rev.find(w);
            if(it1 != rev.end()){
                if(it1->second != m)
                return false;
            }
            else{
                rev[w] = m;   
            }
        }
        return true;
    }
};