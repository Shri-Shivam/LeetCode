class Solution {
public:
    void heapefy(vector<int>&arr,int size, int i)
    {
        int big = i;
        int l= i*2+1;
        int r = i*2+2;
        if(l<size&&arr[big]<arr[l])
        {
            big = l;
        }
        if(r<size&&arr[big]<arr[r])
        {
            big= r;
        }
        if(big!=i)
        {
          swap(arr[i],arr[big]);
          heapefy(arr,size,big);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int  n = nums.size();
        for(int i = (n/2)-1;i>=0;i--)
        {
            heapefy(nums,n,i);
        }
        for(int i = n-1;i>=0;i--)
        {
            swap(nums[0],nums[i]);
            heapefy(nums,i,0);
        }
        return nums;
    }
};