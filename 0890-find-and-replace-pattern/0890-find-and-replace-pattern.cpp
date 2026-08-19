class Solution {
public:
    vector<int>encode(string s) {
         vector<int> ans;
        unordered_map<char, int> mp;
        int count = 1;

        for (char ch : s) {
            if (mp.find(ch) == mp.end()) {
                mp[ch] = count++;
            }

            ans.push_back(mp[ch]);
        }

        return ans;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
       vector<string>ans;
       vector<int>p=encode(pattern);
          for (string word : words) {

            if (encode(word) == p) {
                ans.push_back(word);
            }
        }
        return ans;
    }
};