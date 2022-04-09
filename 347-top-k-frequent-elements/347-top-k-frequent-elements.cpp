class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>>v;
        int n=nums.size();
        vector<int>vec;
        int str=0,j=0;
        int end=n-1;
        sort(nums.begin(),nums.end());
        while(str<=end)
        {   
            int cnt=0;
            for(auto i:nums)
            {   
                if(i==nums[str])
                {
                    cnt++;
                }    
            }
            
            v.push_back({nums[str], cnt});
            str+=cnt;
            j++;
         
            
        }
        sort(v.begin(),v.end(),[](const auto &x,const auto &y){return x.second>y.second;});
        for(int i=0;i<k;i++)
        {
            vec.push_back(v[i].first);
        }
        return vec;
        
        
    }
};