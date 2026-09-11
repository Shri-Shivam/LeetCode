class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int count[10]={};
        int ans=0;
        for(int x: digits)
        {
            count[x]++;
        }
        for(int i = 1;i<=9;i++)
        {
            if(count[i]==0)
            {
                continue;
            }
            for(int j=0;j<=9;j++)
            {
                if(count[j]==0)
                {
                    continue;
                }
                for(int k=0;k<=8;k+=2)
                {
                    if(count[k]==0)
                    {
                        continue;
                    }
                    if(i==j&&count[i]<2)
                    {
                        continue;
                    }
                    if(j==k&&count[j]<2)
                    {
                        continue;
                    }
                    if(i==k&&count[i]<2)
                    {
                        continue;
                    }
                    if (i == j && j == k && count[i] < 3)
                        continue;
                  ans++;
                }
            }
        }
        return ans;
    }
};