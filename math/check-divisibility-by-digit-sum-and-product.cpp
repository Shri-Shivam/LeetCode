class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int product=1;
        int orig=n;
        while(n>0)
        {
              int rem=n%10;
              sum+=rem;
              product*=rem;
              n/=10;
        }
        return orig%(sum+product)==0;
    }
};