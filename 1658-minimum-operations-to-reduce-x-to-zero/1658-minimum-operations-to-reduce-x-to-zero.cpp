class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int t=0;
        for(int n:nums) t+=n;
        int target=t-x;
        if(target<0) return -1;
        if(target==0) return nums.size();

        int left=0;
        int sum=0;
        int maxlen=-1;
        for(int right=0;right<nums.size();right++){
            sum+=nums[right];
            while(sum>target){
                sum-=nums[left];
                left++;
            }
            if(sum==target){
                maxlen=max(maxlen,right-left+1);
            }
        }
        if(maxlen==-1) return -1;
        return nums.size()-maxlen;
    }
};