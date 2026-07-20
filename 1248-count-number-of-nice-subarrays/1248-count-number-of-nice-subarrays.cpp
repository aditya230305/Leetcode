class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
     unordered_map<int ,int>prefixSum;
       int sum=0,count=0;
       prefixSum[0]=1;
       for(int x:nums){
        if(x%2==0){sum+=0;}
       else sum+=1;
        if(prefixSum.find(sum-k)!=prefixSum.end()){
            count+=prefixSum[sum-k];
        }
        prefixSum[sum]++;
       } 
       return count;
    }
};