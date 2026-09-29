class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude = 0;
        int heighest= 0;
        for(int x : gain)
        {
            altitude += x;
            heighest= max(altitude,heighest);
        }
        return heighest;
    }
};