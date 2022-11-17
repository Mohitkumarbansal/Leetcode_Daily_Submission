class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        
        int length_words=words.size();
        
        unordered_map<string,int> map1;
        
        for(int i=0;i<length_words;i++)
        {
            map1[words[i]]++;
        }
        //cout<<map1["nn"]<<endl;
        int ans=0;
        bool done=false;
        for(int i=0;i<length_words;i++)
        {
            string reverse1="";
            
            reverse1=words[i][1];
            reverse1+=words[i][0];
            bool done1=false;
            if(map1.find(words[i])!=map1.end() && map1.find(reverse1)!=map1.end() && map1[reverse1]>0 )
            {
                //cout<<words[i]<<" "<<4<<endl;
                map1[reverse1]--;
                if(map1[words[i]]>0)
                {
                    
                    ans+=4;
                    map1[words[i]]--;
                    done1=true;
                } 
                else
                {
                    map1[reverse1]++;
                }
                
            }
            if(words[i][0]==words[i][1] && done==false && map1.find(words[i])!=map1.end() && done1==false)
            {
                if(map1[words[i]]>0)
                {
                    //cout<<words[i]<<endl;
                    map1[words[i]]--;
                    ans+=2;
                    done=true;
                }
            }
        }
        return(ans);
    }
};