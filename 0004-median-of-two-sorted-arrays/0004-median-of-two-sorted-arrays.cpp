class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int size = n + m;
        int idx1 = (size / 2) - 1;
        int idx2 = (size / 2);
        int element1 = -1;
        int element2 = -1;
        int i = 0, j = 0, k = 0;
        while (i < n && j < m) {
            if (nums1[i] < nums2[j]) {
                if (k == idx1) {
                    element1 = nums1[i];
                }
                if (k == idx2) {
                    element2 = nums1[i];
                }
                i++;
            } else {
                if (k == idx1) {
                    element1 = nums2[j];
                }
                if (k == idx2) {
                    element2 = nums2[j];
                }
                j++;
            }
            k++;
        }
        while (i < n) {
            if (k == idx1) {
                element1 = nums1[i];
            }
            if (k == idx2) {
                element2 = nums1[i];
            }
            i++;
            k++;
        }
        while (j < m) {
            if (k == idx1) {
                element1 = nums2[j];
            }
            if (k == idx2) {
                element2 = nums2[j];
            }
            j++;
            k++;
        }
        if (size % 2 == 1) {
            return element2;
        }
        return (element1 + element2) / 2.0;
    }
};