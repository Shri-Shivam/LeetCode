class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();

        vector<int> freq(n + 1, 0);

        pair<int, int> ans = {-1, -1};

        // Count frequency of each number
        for (int x : nums) {
            freq[x]++;
        }

        // Find duplicate and missing number
        for (int i = 1; i <= n; i++) {
            if (freq[i] == 2) {
                ans.first = i;   // duplicate
            }

            if (freq[i] == 0) {
                ans.second = i;  // missing
            }
        }

        return {ans.first, ans.second};
    }
};