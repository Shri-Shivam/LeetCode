class Solution {
public:
    
    long long lcm(long long a, long long b) {
         return (a / gcd(a, b) * b);
          }
    long long  count_ugly(long long  n, long long a, long long b, long long  c) {
        long long ab = lcm(a, b);
        long long bc = lcm(b, c);
        long long ac = lcm(a, c);
        long long abc = lcm(lcm(a, b), c);

        long long count =
            n / a + n / b + n / c - n / ab - n / bc - n / ac + n / abc;

        return count;
    }
    int nthUglyNumber(int n, int a, int b, int c) {
        long long left=1;
        long long right=2000000000LL;
        while(left<right)
        {
            long long mid=left +(right-left)/2;
            long long count = count_ugly(mid,a,b,c);
            if(count<n)
            {
                left=mid+1;
            }
            else{
                right=mid;
            }
        }
      return left;
    }

}
;