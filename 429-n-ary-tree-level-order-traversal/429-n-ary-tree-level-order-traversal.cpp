/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        
        vector<vector<int>> ans;
        if(root==NULL)
        {
            return(ans);
        }
        queue<Node *> q;
        q.push(root);
        //cout<<root<<endl;
        while(q.empty()==false)
        {
            int size=q.size();
            
            vector<int> ans1;
            
            for(int i=1;i<=size;i++)
            {
                Node *front=q.front();
                ans1.push_back(front->val);
                q.pop();
                int size1=front->children.size();
                
                for(int j=0;j<size1;j++)
                {
                    //cout<<front->children[j]->val<<endl;
                    q.push(front->children[j]);
                }
            }
            ans.push_back(ans1);
        }
        return(ans);
        
    }
};