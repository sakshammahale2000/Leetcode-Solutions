class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        int laststone=0;
        int end=n-1;
        while(0<end)
        { 
            sort(stones.begin(),stones.end());
            if(stones[end-1]==stones[end])
            {
                stones.pop_back();
                stones.pop_back();
                end-=2;
            } 
            else
            {
                stones[end-1]=stones[end]-stones[end-1];
                stones.pop_back();
                end--;
                
            }
            
        }
        if(stones.empty())
            return 0;
        else
        {
            laststone=stones[0];
            return laststone;
        }
        return 0;
    }
};