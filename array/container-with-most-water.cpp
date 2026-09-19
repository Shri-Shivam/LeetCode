class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right= height.size()-1;
        int area = 0;
        int maxarea=0;
        while(left<right)
        {
           int h = min(height[left],height[right]);
           area = (right-left)*h;
           if(area>=maxarea)
           {
            maxarea= area;
           }
           if (height[left] < height[right])
                left++;
            else
                right--;
        }
        return maxarea;
    }
};