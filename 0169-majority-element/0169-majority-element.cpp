class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int element = nums[0];
        int count = 1;
        for(int i=1;i<n;i++){
            if(count==0){
                element = nums[i];
                count=1;
            }else if(element == nums[i]){
                count++;
            }else{
                count--;
            }
        }
        int freq = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==element) freq++;
        }
        if(freq>n/2) return element;
        return -1;
    }
};