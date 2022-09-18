class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> left(height.size());
        vector<int> right(height.size());
        left[0]=height[0];
        int max=height[0];
        for(int i=1;i<height.size();i++)
        {
            if(height[i]<=max)
            {
                left[i]=max;
            }
            else if(height[i]>max)
            {
                left[i]=height[i];
                max=height[i];
            }
        }
        
        right[height.size()-1]=height[height.size()-1];
        max=height[height.size()-1];
        
        for(int i=height.size()-2;i>=0;i--)
        {
            if(height[i]<=max)
            {
                right[i]=max;
            }
            else
            {
                right[i]=height[i];
                max=height[i];
            }
        }
        
        int ans=0;
        
        for(int i=1;i<height.size()-1;i++)
        {
            int min=left[i]>right[i]?right[i]:left[i];
            ans=ans+(min-height[i]);
        }
        return(ans);
            
        
    }
};