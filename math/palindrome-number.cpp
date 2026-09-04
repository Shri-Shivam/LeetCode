class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0)
        {
            return false;
        }
        long long  orig=x;
       long long reversed=0;
       while(x!=0)
       {
        long long rem=x%10;
        reversed=reversed*10+rem;
        x/=10;
       }
      return reversed==orig;
    }
};