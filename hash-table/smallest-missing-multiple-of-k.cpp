class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>set;
        for(int x: nums)
        {
            set.insert(x);
        }
        for(int i=1;;i++)
        {
            int multiple=i*k;
            if(set.find(multiple)==set.end())
            {
                return multiple;
            }
        }
    }
};