class Solution {
public:
    vector<int> encode(string s) {
        unordered_map<string, int> mp;
        vector<int> ans;

        int count = 1;

        stringstream ss(s);
        string word;

        while (ss >> word) {

            if (mp.find(word) == mp.end()) {
                mp[word] = count++;
            }

            ans.push_back(mp[word]);
        }

        return ans;
    }
    bool wordPattern(string pattern, string s) {
        vector<int> p;
        unordered_map<char, int> mp;
        int count = 1;

        for (char ch : pattern) {

            if (mp.find(ch) == mp.end()) {
                mp[ch] = count++;
            }

            p.push_back(mp[ch]);
        }
        vector<int> w = encode(s);

        return p == w;
    }
};