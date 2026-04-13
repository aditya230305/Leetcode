class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> s;
        for(int i : nums)
        {
            if (i>0)
                s.insert(i);
        }
        int missing = 1;
        while (true) {
            if (s.find(missing) == s.end())
                return missing;
            missing++;
        }
    }
};