class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int f=-1,l=-1;
        if(nums.empty()||nums[n-1]<target||nums[0]>target)
        {
            return {f,l};
        }
        
        for(int i=0;i<n;i++)
        {
          if(nums[i]==target)
          {
              if(f==-1)
              {f=i;}
              l=i;
          }
        }
        return {f,l};
    }
};