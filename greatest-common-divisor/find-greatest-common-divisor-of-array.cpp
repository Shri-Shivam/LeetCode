class Solution {
public:
int gcd(int first,int second)
{
    if (second==0)
    {
        return first;
    }
    return gcd(second,first%second);
}
    int findGCD(vector<int>& nums) {
        int first=nums[0];
        int second = nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>second)
            {
                second=nums[i];
            }
             if(nums[i]<first)
            {
                first=nums[i];
            }
        }
       
        return gcd(first,second);
    }
};