class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans=0;
        int open = 0;
        for(char c: s)
        {
            if(c=='(')
            {
                open++;
            }
            else if(c==')')
            {
                if(open==0)
                {
                    ans++;
                }
                else{
                    open--;
                }
            }

        }
        ans+=open;
        return ans;
        
    }
};