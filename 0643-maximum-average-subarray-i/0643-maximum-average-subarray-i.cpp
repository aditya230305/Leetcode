class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double  sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        double avg=sum/k;
        double maxAvg=avg;
        int left=0;
        int right=k-1;
        while(right+1<nums.size()){
            sum-=nums[left];
            left++;
            right++;
            sum+=nums[right];
            avg=sum/k;
            maxAvg=max(avg,maxAvg);

        }
        return maxAvg;
    }
};