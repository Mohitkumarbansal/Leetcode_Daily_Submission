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
    TreeNode* reverseOddLevels(TreeNode* root) {
        
        if(root==NULL)
        {
            return(NULL);
        }
        queue<TreeNode *> q;
        q.push(root);
        int level=0;
        while(q.empty()==false)
        {
            int size=q.size();
            vector<TreeNode *> l;
            
            
            for(int i=1;i<=size;i++)
            {
                if((level%2)!=0)
                {
                    l.push_back(q.front()); 
                }
                TreeNode *root1=q.front();
                q.pop();
                
                if(root1->left!=NULL)
                {
                    q.push(root1->left);
                }
                if(root1->right!=NULL)
                {
                    q.push(root1->right);
                }
            }
            
            if((level%2)!=0)
            {
                int start=0;
                int end=size-1;
                
                while(start<end)
                {
                    int swap=l[start]->val;
                    l[start]->val=l[end]->val;
                    l[end]->val=swap;
                    start++;
                    end--;
                }
            }
            level++;
            
        }
        return(root);
        
    }
};