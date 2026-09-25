class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1(nums1.begin(),nums1.end());
        set<int>s2(nums2.begin(),nums2.end());
        vector<int>a;
        vector<int>b;
        for(int x: s1)
        {
            if(s2.find(x)==s2.end())
            {
                a.push_back(x);
            }
        }
        for(int y: s2)
        {
            if(s1.find(y)==s1.end())
            {
                b.push_back(y);
            }
        }
        return {a,b};
    }
};