class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        int minDiff = INT_MAX;
        int closestSum = 0;

        for (int i = 0; i < nums.size() - 2; i++) {

            int left = i + 1;
            int right = nums.size() - 1;

            while (left < right) {

                int sum = nums[i] + nums[left] + nums[right];

                if (abs(target - sum) < minDiff) {
                    minDiff = abs(target - sum);
                    closestSum = sum;
                }

                if (sum < target) {
                    left++;
                }
                else if (sum > target) {
                    right--;
                }
                else {
                    return sum;
                }
            }
        }

        return closestSum;
    }
};