class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        vector<int> res;
        for (int j = 0; j < n; j++) {
            if (nums[j] == key) {
                int start = max(j - k, 0);
                int end = min(j + k, n - 1);
                if (!res.empty() && res.back() >= start) {
                    start = res.back() + 1;
                }
                for (int i = start; i <= end; i++) {
                    res.push_back(i);
                }
            }
        }
        return res;
    }
};