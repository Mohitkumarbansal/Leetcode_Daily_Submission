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
    vector<double> averageOfLevels(TreeNode* root) {
        
        vector<double> ans;
        
        queue<TreeNode *> q;
        
        q.push(root);
        
        while(q.empty()==false)
        {
            int size=q.size();
            double sum=0;
            for(int i=1;i<=size;i++)
            {
                TreeNode *root1=q.front();
                q.pop();
                sum+=root1->val;
                if(root1->left!=NULL)
                {
                    q.push(root1->left);
                    
                }
                if(root1->right!=NULL)
                {
                    q.push(root1->right);
                }
            }
            ans.push_back(sum/size);
            
        }
        return(ans);
        
    }
};