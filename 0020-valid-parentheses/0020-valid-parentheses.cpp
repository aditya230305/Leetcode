class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> mp = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        stack<char> st;

        for (auto b : s) {

            if (b=='('|| b=='{'||b=='[') {
                st.push(b);
            }
            else {
                if (st.empty())
                    return false;

                if (st.top()!=mp[b])
                    return false;

                st.pop();
            }
        }

        return st.empty();
    }
};