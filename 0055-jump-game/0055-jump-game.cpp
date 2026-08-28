class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxindex=nums[0];
        for(int i=1;i<nums.size()-1;i++){
            if (i>maxindex) return false;
            maxindex=max(maxindex,nums[i]+i);
        }
        if(maxindex>=nums.size()-1) return true;
        else return false;
    }
};