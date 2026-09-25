class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mp(nums.begin(),nums.end());
        int longest=0;
        for(int num: mp)
        {
            if(mp.find(num-1)==mp.end())
            {
                int length=1;
                int current= num;
                while(mp.find(current+1)!=mp.end())
                {
                    current++;
                    length++;
                }
                longest=max(length,longest);
            }
        }
        return longest;
    }

};