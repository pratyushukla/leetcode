class Solution {
public:
    bool isAlienSorted(vector<string>& words, const string& order) {
    vector<char> str(26);
    for (int i = 0; i < 26; ++i)
        str[order[i] - 'a'] = i + 'a';
    for (string& word : words)
        for (char& c : word)
            c = str[c - 'a'];
    return is_sorted(begin(words), end(words));
    }
};
