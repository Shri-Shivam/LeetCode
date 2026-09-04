class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> arr;
        for (int i = 1; i < nums.size(); i++) {
            int diff = nums[i] - nums[i - 1];
            if (diff > 1) {
                int j = nums[i-1] + 1;
                while (j < nums[i]) {
                    arr.push_back(j);
                    j++;
                }
            }
        }
        return arr;
    }
};