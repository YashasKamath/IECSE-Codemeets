class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size(),low=0,high=n-1;
        vector<int> ans(2,-1);
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>=target) high=mid-1;
            else low=mid+1;
        }
        if(low>=0 && low<=n-1 && nums[low]==target) ans[0]=low;
        low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>target) high=mid-1;
            else low=mid+1;
        }
        if(high<=n-1 && high>=0 && nums[high]==target) ans[1]=high;
        return ans;
    }
};