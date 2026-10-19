class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int smal=0;
        int eq=0;
        vector<int>ans;
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]<target)
            {
                 smal++;
            }
            else if(nums[i]==target)
            {
                eq++;
            }
        }
        for(int i = smal;i<smal+eq;i++)
        {
            ans.push_back(i);
        }
        return ans;
    }
};