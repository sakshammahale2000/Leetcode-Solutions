class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        
        int n=nums.size();
        for(auto i:nums)
        {
            ++mp[i];
        }
        
        multimap<int,int>mm;
        vector<int>ans;
        for(auto i:mp)
        {
            mm.insert({i.second,i.first});
        }
        
        for(auto it=mm.rbegin();it!=mm.rend();it++)
        {
            if(k!=0)
            {
                ans.push_back(it->second);
                k--;
            }
            else
                break;
        }
        return ans;
        
    }
};