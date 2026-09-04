class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>diss;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i])==mp.end())
            {
                mp[nums[i]]=1;
            }
        }
        for(int x=1;x<=nums.size();x++)
        {
            if(mp[x]==0)
        {
            diss.push_back(x);
        }
        }
        return diss;
    }
};