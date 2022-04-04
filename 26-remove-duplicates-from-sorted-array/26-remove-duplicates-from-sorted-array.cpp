class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
            map<int,int>mp;
        int n= nums.size();
        for(int i=0;i<n;i++)
        {
            ++mp[nums[i]];
        }
        nums.clear();
        for(auto i:mp)
        {
            if(i.second>1)
               i.second=1;
            nums.push_back(i.first);
        }
        return (nums.size());
        
    }
};