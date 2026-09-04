class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>arr;
        int temp;
        for(int i=left;i<=right;i++)
        {
           bool valid= true;
           int temp=i;
           int rem;
           while(temp>0){
            rem=temp%10;
            temp=temp/10;
            if(rem==0)
            {
                valid= false;
                break;
            }
            else {
                if(i%rem!=0)
                {
                    valid=false;
                    break;
                }
            }
           }
           if(valid)
           {
            arr.push_back(i);
           }
        }
        return arr;
    }
};