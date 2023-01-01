class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        int n=nums.size();int ele;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            if(mp[nums[i]]>n/2)
            {
                ele=nums[i];
                break;
            }
        }
        return ele;
    }
};