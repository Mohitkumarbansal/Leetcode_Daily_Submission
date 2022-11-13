class Solution {
public:
    string reverseWords(string s) {
        
        int length_s=s.size();
        
        vector<string> strings;
        
        string currentString="";
        
        for(int i=0;i<length_s;i++)
        {
            if(s[i]==' ')
            {
                if(currentString!="")
                {
                    strings.push_back(currentString);
                    currentString="";
                }
                continue;
            }
            else
            {
                currentString+=s[i];
            }
        }
        if(currentString!="")
        {
            strings.push_back(currentString);
            currentString="";
        }
        
        string ans="";
        
        for(int i=strings.size()-1;i>=0;i--)
        {
            ans+=strings[i];
            if(i!=0)
            {
                ans+=" ";
            }
            
        }
        
        return(ans);
        
    }
};