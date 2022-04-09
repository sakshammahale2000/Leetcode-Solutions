bool compare( const pair<int,int>&x, const pair<int,int>&y)
    {
        return x.second> y.second;
    }

class Solution {
public:
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        
        int n=nums.size();
        for(auto i:nums)
        {
            ++mp[i];
        }
        
        vector<pair<int,int>> v(mp.begin(),mp.end());
        sort(v.begin(),v.end(),compare );
        vector<int>ans;
        for(int i=0;i<k;i++)
        {
            ans.push_back(v[i].first);
        }
        return ans;
        
    
        
    }
};