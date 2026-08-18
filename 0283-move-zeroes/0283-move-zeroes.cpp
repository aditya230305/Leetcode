class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) count++;
            else{
                nums[i-count]=nums[i];
            }}
            int n=nums.size();
            for(int i=n-count;i<n;i++){
                nums[i]=0;
            }
        
        
    }
};