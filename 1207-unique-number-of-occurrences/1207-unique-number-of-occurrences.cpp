class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        int length_arr=arr.size();
        
        unordered_map<int,int> map1;
        
        for(int i=0;i<length_arr;i++)
        {
            map1[arr[i]]++;
        }
        
        set<int> set1;
        
        for(auto it=map1.begin();it!=map1.end();it++)
        {
            if(set1.find(it->second)==set1.end())
            {
                set1.insert(it->second);
            }
            else
            {
                return(false);
            }
        }
        
        return(true);
        
    }
};