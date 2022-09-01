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
    int find(TreeNode *root,int max)
    {
        if(root==NULL)
        {
            return(0);
        }
        int ans=0;
        if(root->val>=max)
        {
            ans++;
        }
        max=max>root->val?max:root->val;
        ans+=find(root->left,max);
        ans+=find(root->right,max);
        
        return(ans);
        
    }
    int goodNodes(TreeNode* root) {
        
        int ans=0;
        
        ans+=find(root->left,root->val);
        ans+=find(root->right,root->val);
        
        return(ans+1);
    }
};