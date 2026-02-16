class Solution {
public:
    int search(vector<int>& nums, int target) {
       
        int low = 0, high = int(nums.size());
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] <= target) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        
        if (low > 0 and nums[low - 1] == target) {
            return low - 1;
        } else {
            return -1;
        }
    }
};