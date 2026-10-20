class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        vector<int>ans;
        for(int i = 0;i<nums.size();i++)
        {
            bool left=true;
            bool right=true;
            for(int j = 0 ;j<i;j++)
            {
                if(nums[j]>=nums[i])
                {
                  left=false;
                }
            }
            for(int j = nums.size()-1;j>i;j--)
            {
                if(nums[j]>=nums[i])
                {
                    right=false;
                }
            }
            if(left||right)
            {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};