class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int n = arr.size();
        int lo=0;
        int hi=n-1;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(arr[mid]==target) return true;
            if(arr[lo]==arr[mid] && arr[hi]==arr[mid]){
                lo++;
                hi--;
                continue;
            }
            if(arr[lo]<=arr[mid]){
                if(arr[lo]<=target && target<=arr[mid]){
                    hi = mid - 1;
                }
                else{
                    lo = mid + 1;
                }
            } else {
                if(arr[mid]<=target && target<=arr[hi]){
                    lo = mid + 1;
                }
                else{
                    hi = mid - 1;
                }
            }
        }
        return false;
    }
};