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
    void find(TreeNode *root,string &ans)
    {
        if(root==NULL)
        {
            
            return;
        }
        ans+='(';
        ans+=to_string(root->val);
        if(root->left==NULL && root->right!=NULL)
        {
            ans+="()";
        }
        find(root->left,ans);
        
        
        find(root->right,ans);
        ans+=')';
        
    }
    string tree2str(TreeNode* root) {
        
        string ans="";
        
        if(root!=NULL)
        {
            ans+=to_string(root->val);
            if(root->left==NULL && root->right==NULL)
            {
                return(ans);
            }
            if(root->left==NULL)
            {
                ans+="()";
            }
            else
            {
                find(root->left,ans);
            }
            //find(root->left,ans);
            find(root->right,ans);
        }
        return(ans);
        
    }
};