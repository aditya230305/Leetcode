class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_set<int>seen;
        unordered_set<int>nots;
        int prev=-1;
        for(int x:nums){
            if(seen.count(x)&& prev!=x){
                nots.insert(x);
            }
            seen.insert(x);
            prev=x;
        }
        return seen.size()-nots.size();
    }
};