class Solution {
    public:
     bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }

    long long countOfSubstrings(string word, int k) {
        int n = word.length();
        unordered_map<char, int> vowelCount;
        vector<int> nextConsonant(n); 
        int lastConsonantIdx = n;

       
        for (int i = n - 1; i >= 0; i--) {
            nextConsonant[i] = lastConsonantIdx;
            if (!isVowel(word[i])) lastConsonantIdx = i;
        }

        int i = 0, j = 0, consonants = 0;
        long long count = 0;

        while (j < n) {
            if (isVowel(word[j])) vowelCount[word[j]]++;
            else consonants++;

            
            while (consonants > k) { 
                if (isVowel(word[i])) {
                    vowelCount[word[i]]--;
                    if (vowelCount[word[i]] == 0) vowelCount.erase(word[i]);
                } else consonants--;
                i++;
            }

            while (i < n && vowelCount.size() == 5 && consonants == k) { 
                int idx = nextConsonant[j]; 
                count += idx - j; 
                if (isVowel(word[i])) {
                    vowelCount[word[i]]--;
                    if (vowelCount[word[i]] == 0) vowelCount.erase(word[i]);
                } else consonants--;
                i++;
            }

            j++;
        }

        return count;
    }
};