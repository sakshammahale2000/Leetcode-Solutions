class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {   
        int n=nums.size();
        int str=0,mid=-1;
        int end=n-1;
        int flag=0;
        int f=-1,l=-1;
        //int midf,midl;
        while(str<=end)
          {
                
                mid=(str+end)/2;
                if(target==nums[mid])
                {  flag=1;
                    f=mid;
                    end=mid-1;
                    continue;
                    
                } 
                else if(target>nums[mid])
                     str=mid+1;
                else
                     end=mid-1;
            
           }
        if(flag==0)
            return {-1,-1};
       
       
        str=f;end=n-1;
         while(str<=end)
          {
                
                mid=(str+end)/2;
                if(target==nums[mid])
                {  
                    l=mid;
                    str=mid+1;
                    continue;
                    
                } 
                else if(target>nums[mid])
                     str=mid+1;
                else
                     end=mid-1;
            
           }

        //f=midf;
        //l=midl;
        return {f,l};
        
    
  
    }
};
   














        
      
     /*   midf=mid;
        midl=mid;
        while(nums[midf]==target)
        {
            if(nums[midf-1]==target)
            {
                f=midf-1;
                midf--;
            }
        }
         while(nums[midl]==target)
        {
            if(nums[midl-1]==target)
            {
                f=midl+1;
                midl++;
            }
        }*/
/* int n=nums.size();
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
        return {f,l};*/