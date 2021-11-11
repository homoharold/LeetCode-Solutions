class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int startVal = 0;
        int localMin;
        do {
            startVal++;
            int curr = startVal;
            localMin = INT_MAX;
            for (int cell: nums) { //iterate over nums, adding start - iter
                localMin = min(localMin, curr + cell);
                curr = curr + cell;
            }
        } while (localMin < 0);
        return startVal;
    }
};
