class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int h=0;
        int size=citations.size();
        for(int i=0;i<size;i++)
        {
            int papers=size-i;
            if(citations[i]>=papers)
            {
                h=max(h,papers);
            }
        }
        return h;
    }
};