class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        
        int length_nums=nums.size();
        
        int ans=0;
        
        for(int i=0;i<length_nums;i++)
        {
            for(int j=i+1;j<length_nums;j++)
            {
                for(int k=j+1;k<length_nums;k++)
                {
                    if(nums[i]!=nums[j] && nums[j]!=nums[k] && nums[i]!=nums[k])
                    {
                        ans++;
                    }
                }
            }
        }
        return(ans);
    }
};