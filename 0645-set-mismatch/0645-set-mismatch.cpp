class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        int length_nums=nums.size();
        
        vector<int> count(length_nums+1,0);
        
        for(int i=0;i<length_nums;i++)
        {
            count[nums[i]]++;
        }
        
        vector<int> ans;
        bool result=false;
        int number=-1;
        for(int i=1;i<=length_nums;i++)
        {
            if(count[i]==0 && result==false)
            {
                result=true;
                number=i;
            }
            
            if(count[i]==2)
            {
                ans.push_back(i);
                
                if(result)
                {
                    break;
                }
            
            }
        }
        ans.push_back(number);
        
        return(ans);
        
    }
};