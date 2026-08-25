class Solution {
public:
    int residuePrefixes(string s) {
        int n=s.length();
        string pref="";
        int residue=0,count=0;
            for(int j=0;j<n;j++){
                set<char> st;
                pref=s.substr(0,j+1);
                for(char c:pref){
                    st.insert(c);
                }
                residue=(pref.length())%3;
                if(st.size()==residue) count++;
            }
            return count;
        }
};