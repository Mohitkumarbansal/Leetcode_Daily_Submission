class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int rows=matrix.size();
        int cols=matrix[0].size();
        
        for(int i=0;i<rows;i++)
        {
            for(int j=i;j<cols;j++)
            {
                int swap=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=swap;
            }
        }
        
        for(int i=0;i<rows;i++)
        {
            int start=0;
            int end=cols-1;
            
            while(start<end)
            {
                int swap=matrix[i][start];
                matrix[i][start]=matrix[i][end];
                matrix[i][end]=swap;
                start++;
                end--;
            }
        }
        
        
    }
};