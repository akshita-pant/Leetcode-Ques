// brute force, all cases not passed
//  class Solution {
//  public:
//      bool increasingTriplet(vector<int>& nums) {
//          for(int i=0; i<nums.size()-2; i++)
//          {
//              if((nums[i]<nums[i+1])&&(nums[i+1]<nums[i+2]))
//              return true;
//          }
//          return false;
//      }
//  };

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int a = INT_MAX;
        int b = INT_MAX;

        for (auto num : nums) {
            if (num <= a) { //a se chota hoga
                a = num;
            } else if (num <= b) { //a se bada hoga b se chota
                b = num;
            } else { // ab jo bache hoga vo bada hi hoga inse, warna upar ki do ifs me jata
                return true;
            }
        }
        return false;
    }
};