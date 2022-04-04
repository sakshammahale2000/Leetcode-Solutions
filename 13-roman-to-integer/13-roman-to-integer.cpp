class Solution {
public:
    int romanToInt(string s) {
        map<char,int>mp={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int n=s.length();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(auto j:mp)
            {
                if(s[i]==j.first)
                {
                    if((s[i]=='I')&&(s[i+1]=='V'))
                    {cnt+=4;
                     i++;
                   break;
                    }
                    else if((s[i]=='I')&&(s[i+1]=='X'))
                    { cnt+=9;
                     i++;
                    break;
                    }
                    else if((s[i]=='X')&&(s[i+1]=='L'))
                    {cnt+=40;
                     i++;
                     break; 
                    }
                    else if((s[i]=='X')&&(s[i+1]=='C'))
                    {cnt+=90;
                     i++;
                     break;
                    
                    }
                    else if((s[i]=='C')&&(s[i+1]=='D'))
                    {cnt+=400;
                     i++;
                    break;
                    }
                    else if((s[i]=='C')&&(s[i+1]=='M'))
                    {cnt+=900;
                     i++;
                     break;
                    }
                    else
                        cnt+=j.second;
                
                }
            }
        }
        return cnt;
     }
        
        
                             
}; 