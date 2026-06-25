class Solution {
public:
    long long ans = 0;

    void merge(vector<int>& pref, int low, int mid, int high) {

        int j = mid + 1;

        // Count pairs: pref[i] < pref[j]
        for (int i = low; i <= mid; i++) {
            while (j <= high && pref[j] <= pref[i]) {
                j++;
            }
            ans += (high - j + 1);
        }

        vector<int> temp;
        int left = low;
        int right = mid + 1;

        while (left <= mid && right <= high) {
            if (pref[left] <= pref[right]) {
                temp.push_back(pref[left++]);
            } else {
                temp.push_back(pref[right++]);
            }
        }

        while (left <= mid)
            temp.push_back(pref[left++]);

        while (right <= high)
            temp.push_back(pref[right++]);

        for (int i = low; i <= high; i++) {
            pref[i] = temp[i - low];
        }
    }

    void mergeSort(vector<int>& pref, int low, int high) {
        if (low >= high) return;

        int mid = low + (high - low) / 2;

        mergeSort(pref, low, mid);
        mergeSort(pref, mid + 1, high);

        merge(pref, low, mid, high);
    }

    int countMajoritySubarrays(vector<int>& nums, int target) {

        int n = nums.size();

        vector<int> pref(n + 1, 0);

        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + (nums[i] == target ? 1 : -1);
        }

        mergeSort(pref, 0, n);

        return ans;
    }
};