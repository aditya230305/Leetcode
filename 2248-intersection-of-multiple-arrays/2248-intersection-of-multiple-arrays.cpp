class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        set<int> s(nums[0].begin(), nums[0].end());

        for(int i=1;i<nums.size();i++){
            set<int> temp;
            for(int x : nums[i]){
                if(s.count(x)) temp.insert(x);
            }
            s = temp;
        }

        return vector<int>(s.begin(), s.end());
    }
};