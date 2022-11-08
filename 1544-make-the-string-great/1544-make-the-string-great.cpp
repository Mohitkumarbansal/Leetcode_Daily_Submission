class Solution {
public:
    string makeGood(string s) {
        
        unordered_map<char,char> map1;
        unordered_map<char,char> map2;
        
        int length_s=s.size();
        
        for(int i=0;i<26;i++)
        {
            map1[char('A'+i)]=char('a'+i);
            map2[char('a'+i)]=char('A'+i);
        }
        stack<char> stk;
        stk.push(s[0]);
        
        for(int i=1;i<length_s;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                if(stk.empty()==false && stk.top()==map1[s[i]])
                {
                    stk.pop();
                }
                else
                {
                    stk.push(s[i]);
                }
            }
            else
            {
                if(stk.empty()==false && stk.top()==map2[s[i]])
                {
                    stk.pop();
                }
                else
                {
                    stk.push(s[i]);
                }
            }
        }
        string ans="";
        
        while(stk.empty()==false)
        {
            ans+=stk.top();
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return(ans);
        
    }
};