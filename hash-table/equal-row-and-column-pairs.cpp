class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        unordered_map<string,int>mp;
        for(int i = 0; i< grid.size();i++)
        {
            string key = "";
            for(int j = 0;j<grid.size();j++)
            {
                key+= to_string(grid[i][j])+"#";
            }
            mp[key]++;
        }
        int ans =0;
        for(int i = 0;i< grid.size();i++)
        {
            string key= "";
            for(int j=0;j<grid.size();j++)
            {
                key+=to_string(grid[j][i])+"#";
            }
            if(mp.count(key))
            {
                ans+= mp[key];
            }
        }
        return ans;
    }
};