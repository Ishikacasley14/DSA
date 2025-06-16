class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int minEl = nums[0];
        int maxDiff = -1;
        for (int i = 1; i < n; i++) {
            if (nums[i] > minEl) {
                maxDiff = max(maxDiff, nums[i] - minEl);
            } else {
                minEl = nums[i];
            }
        }
        return maxDiff;
    }
};