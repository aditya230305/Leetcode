class Solution {
public:
    int beautySum(string s) {
        int n = s.length();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            unordered_map<char, int> freq;
            for (int j = i; j < n; j++) {
                freq[s[j]]++;
                int maxi = INT_MIN;
                int mini = INT_MAX;
                for (auto f : freq) {
                    mini = min(mini, f.second);
                    maxi = max(maxi, f.second);
                }
                sum += (maxi - mini);
            }
        }
        return sum;
    }
};