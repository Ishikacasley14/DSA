class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int num : nums) {
            mp[num]++;
        }
        int result = 0;
        int maxfreq = INT_MIN;
        for (auto &it : mp) {
            if (it.second > maxfreq) {
                maxfreq = it.second;
            }
        }
        for (auto &it : mp) {
            if (it.second == maxfreq) {
                result += maxfreq;
            }
        }
        return result;
    }
};