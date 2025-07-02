class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char, string> mp;
        map<string, char> pm;
        istringstream ss(s);
        string word;
        vector<string> words;
        while (ss >> word) {
            words.push_back(word);
        }
        if (pattern.size() != words.size())
            return false;
        for (int i = 0; i < pattern.size(); i++) {
            char p = pattern[i];
            string w = words[i];
            if (mp.count(p)) {
                if (mp[p] != w)
                    return false;
            } else {
                mp[p] = w;
            }
            if (pm.count(w)) {
                if (pm[w] != p)
                    return false;
            } else {
                pm[w] = p;
            }
        }
        return true;
    }
};