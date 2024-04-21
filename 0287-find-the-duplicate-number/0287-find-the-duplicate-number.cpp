//Using Floyd's Hare and tortoise method.
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       int slow=nums[0];
       int fast=nums[0]; 

       do{
            slow=nums[slow];
            fast=nums[nums[fast]];
       }while(slow!=fast);

        fast=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }

       return slow;
    }
};


/*
------------gives TLE else  this logic was also fine-----
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(auto i:nums)
        {
            if(nums[i]==nums[i+1])
            return nums[i];
        }
        return -1;
    }
};*/