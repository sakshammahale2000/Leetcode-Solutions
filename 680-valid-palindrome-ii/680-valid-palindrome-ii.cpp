class Solution {
public:
 bool help(int st,int e,string s)
{
    while(st<=e)
    {
        if(s[st]!=s[e])
            return false;
        st++;
        e--;
    }
    return true;
}
bool validPalindrome(string s) {
    
    
    int st=0;
    int e=s.length()-1;
    
    while(st<=e)
    {
        if(s[st]!=s[e])
        return help(st+1,e,s)||help(st,e-1,s);
        
        st++;
        e--;
    }
    
    return true;
}

};