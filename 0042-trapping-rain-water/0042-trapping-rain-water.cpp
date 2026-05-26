class Solution {
public:
    int trap(vector<int>& height) {
        int n= height.size();
       int left=0;
       int right=n-1;
       int maxL=0;
       int maxR=0;
       int totalW=0;
       while(left<=right){
        if(height[left]<=height[right]){
            if(maxL<=height[left]){
                maxL=height[left];
            }else{
                totalW+=maxL-height[left];
            }
            left++;
        }
        else{
            if(maxR<=height[right]){
                maxR=height[right];
            }
            else{
                totalW+=maxR-height[right];
            }
            right--;
        }
       }
    return totalW;
    }
};