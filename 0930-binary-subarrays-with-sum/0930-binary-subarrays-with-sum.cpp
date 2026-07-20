class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       unordered_map<int ,int>prefixSum;
       int sum=0,count=0;
       prefixSum[0]=1;
       for(int x:nums){
        sum+=x;
        if(prefixSum.find(sum-goal)!=prefixSum.end()){
            count+=prefixSum[sum-goal];
        }
        prefixSum[sum]++;
       } 
       return count;
    }
};