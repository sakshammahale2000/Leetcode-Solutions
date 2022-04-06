class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int str=0;
        int end=n-1;
        int ans,mid;
        if(nums[str]>target)
        {return (str);}
        if(nums[end]<target)
        {return (end+1);}
        while(str<=end)
        {
            mid=(str+end)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                return ans;
            }
            else if(nums[mid]>target)
            {
                end=mid-1;
                ans=end+1;
            }
            else
            {
                str=mid+1;
                ans=str;
            }
            
        }
        return ans;
    }
};