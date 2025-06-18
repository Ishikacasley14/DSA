class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count1 = 0;
        int majEl1 = 0;
        int count2 = 0;
        int majEl2 = 1;
        for (int i = 0; i < n; i++) {
            if (nums[i] == majEl1) {
                count1++;
            } else if (nums[i] == majEl2) {
                count2++;
            } else if (count1 == 0) {
                majEl1 = nums[i];
                count1 = 1;
            } else if (count2 == 0) {
                majEl2 = nums[i];
                count2 = 1;
            } else {
                count1--;
                count2--;
            }
        }

        int freq1 = 0;
        int freq2 = 0;
        for (int& num : nums) {
            if (num == majEl1) {
                freq1++;
            } else if (num == majEl2) {
                freq2++;
            }
        }
        vector<int> result;
        if (freq1 > floor(n / 3)) {
            result.push_back(majEl1);
        }
        if (freq2 > floor(n / 3)) {
            result.push_back(majEl2);
        }
        return result;
    }
};