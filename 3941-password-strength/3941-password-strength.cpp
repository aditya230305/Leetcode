class Solution {
public:
    int passwordStrength(string password) {
        unordered_set<char> seen;
        int score = 0;

        for (char ch : password) {

            if (seen.count(ch)) continue;

            seen.insert(ch);

            if (islower(ch)) {
                score += 1;
            }
            else if (isupper(ch)) {
                score += 2;
            }
            else if (isdigit(ch)) {
                score += 3;
            }
            else if (ch == '!' || ch == '@' || ch == '#' || ch == '$') {
                score += 5;
            }
        }

        return score;
    }
};