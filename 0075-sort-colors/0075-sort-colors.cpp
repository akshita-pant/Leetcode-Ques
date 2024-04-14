/*class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n= nums.size();
        bool swapped=false;
        for(int i=0; i<n-1; i++)
        {
            for(int j=0; j<n-i-1; j++)
            {
                if(nums[j]>nums[j+1])
                {
                    swap(nums[j],nums[j+1]);
                    swapped=true;
                }
            }
            if(swapped==false)
            break;
        }
    }
};*/ //brute force ho gya ye to

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n= nums.size();
        int cnt0=0, cnt1=0,cnt2=0;

        for(int i=0; i<n; i++)
        {
            if(nums[i]==0) cnt0++;
            else if(nums[i]==1) cnt1++;
            else cnt2++;
        }
        for(int i=0; i<cnt0; i++)
        {
            nums[i]=0;
        }
        for(int i=cnt0; i<cnt0+cnt1; i++)
        {
            nums[i]=1;
        }
        for(int i=cnt0+cnt1; i<n; i++)
        {
            nums[i]=2;
        }
    }
};