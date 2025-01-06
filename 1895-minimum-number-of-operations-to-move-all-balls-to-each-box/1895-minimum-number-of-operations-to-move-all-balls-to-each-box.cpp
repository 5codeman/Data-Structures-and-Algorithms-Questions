class Solution {
public:
    vector<int> minOperations(string boxes) {
        // chirag code
        int length=boxes.size();
        int output[length];
        int store=0;
        for(int i=0;i<length;i++)
        {
            for(int j=0;j<length;j++)
            {
                if(boxes[j]=='1')
                {
                    int moves=i-j;
                    if(moves<0)
                    {
                       moves=moves*-1;  
                    }
                    store=store+moves;
                }
            }
            output[i]=store;
            store=0;
        }
        vector<int>ans(output,output+length);
        return ans;
    }
};