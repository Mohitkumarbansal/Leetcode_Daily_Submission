class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        int length_strs=strs.size();

        
        unordered_map<string,vector<string>> map1;
        
        for(int i=0;i<length_strs;i++)
        {
            string s=strs[i];
            
            sort(s.begin(),s.end());
            
            map1[s].push_back(strs[i]);
        }
        
        vector<vector<string>> ans;
        
        for(auto it=map1.begin();it!=map1.end();it++)
        {
            int size=it->second.size();
            
            vector<string> ans1;
            for(int i=0;i<size;i++)
            {
                ans1.push_back(it->second[i]);
            }
            ans.push_back(ans1);
        }
        return(ans);
        
    }
};