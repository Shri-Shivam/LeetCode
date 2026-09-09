class Solution {
public:
    int countCommas(int n) {
        if(n>999)
        {
          int COMMAS=n-1000;
          return COMMAS+1;
        }
        else
        {
        return 0;
        }
    }
};