class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
        int rows=matches.size();
        int cols=matches[0].size();
        
        unordered_map<int,int> map1;
        for(int i=0;i<rows;i++)
        {
            if(map1.find(matches[i][0])==map1.end())
            {
                map1[matches[i][0]]=0;
            }
            if(map1.find(matches[i][1])==map1.end())
            {
                map1[matches[i][1]]=1;
            }
            else
            {
                map1[matches[i][1]]++;
            }
        }
        
        vector<int> zero;
        vector<int> one;
        
        for(auto it=map1.begin();it!=map1.end();it++)
        {
            if(it->second==0)
            {
                zero.push_back(it->first);
            }
            else if(it->second==1)
            {
                one.push_back(it->first);
            }
        }
        sort(zero.begin(),zero.end());
        sort(one.begin(),one.end());
        
        vector<vector<int>> ans;
        ans.push_back(zero);
        ans.push_back(one);
        
        return(ans);
        
        
    }
};