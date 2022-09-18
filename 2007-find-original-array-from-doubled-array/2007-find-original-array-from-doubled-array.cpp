class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        
        int length_changed=changed.size();
        
        unordered_map<int,int> map1;
        sort(changed.begin(),changed.end());
        for(int i=0;i<length_changed;i++)
        {
            map1[changed[i]]++;
        }
        
        vector<int> ans;
        
        for(int i=0;i<length_changed;i++)
        {
            if(map1[changed[i]]>=1)
            {
                map1[changed[i]]--;
                
                if(map1[changed[i]*2]>=1)
                {
                    map1[changed[i]*2]--;
                    ans.push_back(changed[i]);
                }
                else
                {
                    map1[changed[i]]++;
                }
            }
        }
        if(ans.size()==(length_changed)/2 && (length_changed%2)==0)
        {
            return(ans);
        }
        vector<int> ans1;
        
        return(ans1);
        
    }
};