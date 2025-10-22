class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        int ans = INT_MAX;
        while(low<=high){
            int mid = (low+high)/2;
            //first check if left is sorted or not
            if(nums[low]<=nums[mid]){
                ans = min(ans,nums[low]); //collect the min value from the half sorted
                low = mid+1;    //then eliminate the half sorted after collecting the minimu
            }else{  //else check for the right sorted part
                ans = min(ans,nums[mid]); //collect the minimum value from right sorte part
                high = mid-1;      //Eliminate the right sorted part after min value collection
            }
        }
        return ans;
    }
};