class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxx= INT_MIN;
        int sum=0;
        for(int i=0; i<nums.size(); i++)
        {
            sum+=nums[i];

            if(sum>maxx)
            {maxx=sum;}

            if(sum<0)
            {
                sum=0;
            }
        }
        return maxx;
    }
};



/*
---------BETTER O(n^2) but still TLE---------------
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxx= INT_MIN;
        int n= nums.size();
        for(int i=0; i<n; i++)
        {
            int sum=0;
            for(int j=i; j<n; j++)
            {
                sum= sum + nums[j];
                maxx= max(maxx, sum);
            }
        }
        return maxx;
    }
};*/


/*
--------BRUTE FORCE-----------
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxx= INT_MIN;
        int n= nums.size();
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<n; j++)
            {
                int sum=0;
                for(int k=i; k<n; k++)
                {sum= sum + nums[k];
                maxx= max(maxx, sum);}
            }
        }
        return maxx;
    }
};*/