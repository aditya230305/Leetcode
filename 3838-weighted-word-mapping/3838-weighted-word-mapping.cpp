class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string result = "";

        for (int i = 0; i < words.size(); i++) {
            int sum = 0;

            for (int j = 0; j < words[i].size(); j++) {
                char ch = words[i][j];
                sum += weights[ch - 'a'];
            }

            int mod = sum % 26;
            char mapped = 'z' - mod;

            result += mapped;
        }

        return result;
        
    }
};