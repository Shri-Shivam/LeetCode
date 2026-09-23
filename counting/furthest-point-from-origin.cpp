class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int pos=0;
        int und=0;
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i]=='L')
            {
                pos--;
            }
            else if(moves[i]=='R')
            {
                pos++;
            }
            else{
                und++;
            }
        }
        return abs(pos)+und;
    }
};