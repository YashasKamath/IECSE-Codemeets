class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,ele=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(!count){
                ele=nums[i];
                count=1;
            }
            else if(ele!=nums[i]) count--;
            else count++;
        }
        return ele;   
    }
};

//The count of majority element is greater than half of the number of elements of the array. 
//Hence ultimately count will be positive and the element corresponding to this positive count is our majority element.
