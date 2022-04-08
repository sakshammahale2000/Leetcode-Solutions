class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int cnt=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]==' ')
                n--;
            else
                break;
                
        }
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]==' ')
                break;
            else
                cnt++;
        }
        return cnt;
        
    }
};