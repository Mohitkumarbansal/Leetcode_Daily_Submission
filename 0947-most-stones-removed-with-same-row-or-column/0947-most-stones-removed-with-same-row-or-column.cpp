class Solution {
public:
    int dfs(vector<int> adj[],int s,vector<bool> &visited)
    {
        visited[s]=true;
        int run=1;
        for(int v:adj[s])
        {
            if(visited[v]==false)
            {
                run=run+dfs(adj,v,visited);
            }
        }
        return(run);
    }
    int removeStones(vector<vector<int>>& stones) {
        vector<bool> visited(stones.size());
        vector<int> adj[stones.size()];
        for(int i=0;i<stones.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if((stones[j][0]==stones[i][0]) ||(stones[j][1]==stones[i][1]))
                {
                    adj[i].push_back(j);
                }
            }
            for(int j=i+1;j<stones.size();j++)
            {
                if((stones[j][0]==stones[i][0]) ||(stones[j][1]==stones[i][1]))
                {
                    adj[i].push_back(j);
                }
            }
            visited[i]=false;
        }
        int count=0;
        for(int i=0;i<stones.size();i++)
        {
            int run=1;
            if(visited[i]==false)
            {
                run=dfs(adj,i,visited);
                count=count+(run-1);
            }
        }
        return(count);
        
    }
};