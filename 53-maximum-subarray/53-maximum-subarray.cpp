class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cMax=0;
        int lMax=INT_MIN;
        int str=0;
        int end=nums.size()-1;
        while(str<=end)
        {
            cMax+=nums[str];
            lMax=max(lMax,cMax);
            if(cMax<0)
                cMax=0;
            str++;
            
        }
        return lMax;
        
    }
};