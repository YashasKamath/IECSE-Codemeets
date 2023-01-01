class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;int flag=0;
        for(auto i:nums)
        {
            if(++mp[i]>1)
            {
                flag=1;break;
            }
        }
        if(flag)
        return true;
        else
        return false;
    }
};