class Solution {
public:
    int numberOfSpecialChars(string word) {
        bool lower[26] = {false};
        bool upper[26] = {false};

        for (char ch : word) {
            if (islower((unsigned char)ch)) lower[ch - 'a'] = true;
            else if (isupper((unsigned char)ch)) upper[ch - 'A'] = true;
        }

        int count = 0;
        for (int i = 0; i < 26; i++)
            if (lower[i] && upper[i]) count++;

        return count;
    }
};