class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>temp;
        int i=0,j=0;
        int I=nums1.size();
        int J=nums2.size();
        while(i<I&&j<J)
        {
            if(nums1[i]<nums2[j])
            {
                temp.push_back(nums1[i++]);
            }
            else{
                temp.push_back(nums2[j++]);
            }
        }
        while(i<I)
        {
            temp.push_back(nums1[i++]);
        }
        while(j<J)
        {
           temp.push_back(nums2[j++]);
        }
        int n=temp.size();
        float median;
        if(n%2==0)
        {
           median = (temp[n/2 - 1] + temp[n/2]) / 2.0;

        }
        else{
            median=temp[n/2];
        }
        return median;

    }
};