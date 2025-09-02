class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        int n=words.size();
        vector<string> ans;
        int p=pattern.size();
        
         for(int i=0;i<n;i++){
            map<char,char> mpp;
            map<char,char> rev;
            bool ok=true;

            for(int j=0;j<p;j++){
            char w=words[i][j];
            char m=pattern[j];
            auto it = mpp.find(m);
            if(it != mpp.end()){
                if(it->second != w)
              {ok=false;break;}
            }
            else{
                mpp[m] = w;   
            }

            auto it1 = rev.find(w);
            if(it1 != rev.end()){
                if(it1->second != m)
                {ok=false;break;}
            }
            else{
                rev[w] = m;   
            }
            }
            if (ok) ans.push_back(words[i]);
            }
            
            return ans;
    }
};