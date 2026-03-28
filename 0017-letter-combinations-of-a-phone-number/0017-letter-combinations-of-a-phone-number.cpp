class Solution {
public:
    void solve(int index, string &digits, string &curr, vector<string> &ans, vector<string> &map){

        if(index == digits.size()){
            ans.push_back(curr);
            return;
        }

        string letters = map[digits[index] - '0'];

        for(char ch : letters){

            curr.push_back(ch);

            solve(index + 1, digits, curr, ans, map);

            curr.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};

        vector<string> map = {
            "", "", "abc", "def", "ghi", "jkl",
            "mno", "pqrs", "tuv", "wxyz"
        };

        vector<string> ans;
        string curr = "";

        solve(0, digits, curr, ans, map);

        return ans;
    }
};