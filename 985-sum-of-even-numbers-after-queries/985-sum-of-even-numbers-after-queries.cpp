class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        
        
        int sum=0;
        int length_nums=nums.size();
        int length_queries=queries.size();
        
        for(int i=0;i<length_nums;i++)
        {
            sum+=((nums[i]%2)==0?nums[i]:0);
        }
        vector<int> ans(length_queries,0);
        
        for(int i=0;i<length_queries;i++)
        {
            int index=queries[i][1];
            int value=queries[i][0];
            
            if((nums[index]%2)==0)
            {
                if(((nums[index]+value)%2)!=0)
                {
                    sum+=(-nums[index]);
                }
                else
                {
                    sum+=(value);
                }
            }
            else
            {
                if(((nums[index]+value)%2)==0)
                {
                    sum+=nums[index]+value;
                }
                
            }
            
            nums[index]=nums[index]+value;
            ans[i]=sum;
        }
        return(ans);
        
        
    }
};