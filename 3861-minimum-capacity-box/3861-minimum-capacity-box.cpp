class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int index = -1;
        int minC = INT_MAX;

        for (int i = 0; i < capacity.size(); i++) {

            if (capacity[i] >= itemSize && capacity[i] < minC) {
                index = i;
                minC = capacity[i];
            }
        }
        return index;
    }
};