// https://leetcode.com/problems/search-in-rotated-sorted-array/

class Solution {
public:
    int binarySearch(vector <int>&nums, int s, int e, int key)
    {
        int mid = s + (e - s)/2;
        int ans = -1;
        while (s<=e)
        {
            if (nums[mid] == key)
            {
                return mid;
            }
            else if (nums[mid] < key)
            {
                s = mid + 1;
            }
            else if (nums[mid] > key)
            {
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        int mid = start + (end - start)/2;
        int ans;
        
        while (start < end)
        {
            if (nums[mid] >= nums[0])
            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
            mid = start + (end - start)/2;
        }
        if (target >= nums[end] and target <= nums[nums.size()-1])
        {
            //binary search on the second monotonic function
            return binarySearch(nums, end, nums.size()-1, target);
        }
        else
        {
            return binarySearch(nums, 0, end-1, target);
            //binary search on the first monotonic function
        }
    }
};
