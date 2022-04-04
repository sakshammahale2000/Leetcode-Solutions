class Solution {
public:
    int maxArea(vector<int>& height) {
        int Area=0,mArea=0;
        int n=height.size();
        int srt=0;
        int l=0,h=0;
        int end=n-1;
        while(srt<end)
        {l=min(height[srt],height[end]);
         h=end-srt;
         Area=l*h;
         mArea=max(Area,mArea);
         if(height[srt]<=height[end])
         {
             srt++;
         }
         else
         {
             end--;
         }
            
        }
        
        return mArea;
    }
};