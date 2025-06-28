class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n = nums.size();
        if (k == n) {
            return nums;
        }
        vector<int> temp(nums);
        nth_element(begin(temp), begin(temp) + k - 1, end(temp),
                    greater<int>());
        int kthLargest = temp[k - 1];
        int kthcount = count(begin(temp), begin(temp) + k, kthLargest);

        vector<int> result;
        for (int& num : nums) {
            if (num > kthLargest) {
                result.push_back(num);
            } else if (num == kthLargest && kthcount > 0) {
                result.push_back(num);
                kthcount--;
            }
            if (result.size() == k) {
                break;
            }
        }
        return result;
    }
};