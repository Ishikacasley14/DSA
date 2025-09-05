class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int element = nums[0];
        int count = 1;
        for (int i = 1; i < n; i++) {
            if (count == 0) {
                element = nums[i];
                count = 1;
            } else if (nums[i] == element) {
                count++;
            } else {
                count--;
            }
        }
        return element;
        int freq = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == element)
                freq++;
        }
        return freq / 2;
    }
};