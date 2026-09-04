class Solution {
public:
    int findpiyot(int left, vector<int>& nums) {
        int i = left - 1, j = left + 1;
        int sumleft = 0;
        int sumright = 0;

        while (i >= 0) {
            sumleft += nums[i];
            i--;
        }
        while (j < nums.size()) {
            sumright += nums[j];
            j++;
        }
        if (sumright == sumleft) {
            return left;
        } else
            return -1;
    }
    int pivotIndex(vector<int>& nums) {
        int n;
        for (int i = 0; i < nums.size(); i++) {
            n = findpiyot(i, nums);
            if(n!=-1)
             return n; 
        }
    return n;
    }
};