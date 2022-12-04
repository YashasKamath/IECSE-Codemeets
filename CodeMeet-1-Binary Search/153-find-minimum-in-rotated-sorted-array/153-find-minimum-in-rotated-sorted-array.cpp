class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        if(nums[low]<nums[high] || low==high) return nums[low];
        while(low<high){
            int mid=(low+high)/2;
            if(nums[mid]>nums[low]) low=mid;
            else high=mid;
        }
        return nums[low+1];
    }
};