class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]);
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=maxi && nums[i]!=mini){
                return nums[i];
            }
        }
        return -1;
    }
    
};
