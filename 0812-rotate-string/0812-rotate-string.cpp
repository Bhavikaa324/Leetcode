class Solution {
public:
    bool rotateString(string s, string goal) {
        int n =s.length();
        for (int k = 0; k < n; k++) {
    reverse(s.begin(), s.begin() + 1);   
    reverse(s.begin() + 1, s.end());  
    reverse(s.begin(), s.end());     

    if (s == goal) return true; 
}return false;
    }
};