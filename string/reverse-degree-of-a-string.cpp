class Solution {
public:
    int reverseDegree(string s) {
       
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            int rp=26-(s[i]-'a');
            int stringpos=i+1;
            sum+=rp*stringpos;
        }
        return sum;
    }
};