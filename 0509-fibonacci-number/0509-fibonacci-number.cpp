//using DP
class Solution {
public:
    int fib(int n) {
        int prev2=0, prev=1;
        if(n==0)return prev2;
        if(n==1)return prev;
        for(int i=2; i<=n+1; i++)
        {
            int curri = prev+prev2;
            prev2=prev;
            prev=curri;
        }
        return prev2;
    }
};