/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int paths(TreeNode* root,int running_path[])
    {
        if(root==NULL)
        {
            return(0);
        }
        if(root->left==NULL && root->right==NULL)
        {
            running_path[root->val]++;
            int odd_occ=0;
            int length_path=0;
            for(int i=0;i<10;i++)
            {
                //cout<<running_path[i]<<" ";
                if((running_path[i]%2)!=0)
                {
                    odd_occ++;
                }
                length_path+=running_path[i];
            }
            cout<<endl;
            running_path[root->val]--;
            
            if((length_path%2)==0 && odd_occ==0)
            {
                return(1);
            }
            else if((length_path%2)!=0 && odd_occ==1)
            {
                return(1);
            }
            
            return(0);
        }
        running_path[root->val]++;
        int ans=paths(root->left,running_path);
        ans+=paths(root->right,running_path);
        running_path[root->val]--;
        return(ans);
    
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        
        int running_path[10];
        
        for(int i=0;i<10;i++)
        {
            running_path[i]=0;
        }
        
        return(paths(root,running_path));
        
        
    }
};