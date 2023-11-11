class Graph 
{
public:
    unordered_map<int,vector<pair<int,int>>>adj;
    int n;
    Graph(int k, vector<vector<int>>& edges) 
    {
        n = k;
        for(vector<int> &e:edges) adj[e[0]].push_back({e[1],e[2]});
    }
    
    void addEdge(vector<int> e) 
    {
        adj[e[0]].push_back({e[1],e[2]});
    }
    
    int shortestPath(int s, int d) 
    {
        // int n = adj.size();
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>dist(n+1,1e9);

        pq.push({0,s});
        dist[s] = 0;

        while(pq.size())
        {
            pair<int,int>curr = pq.top();
            int u = curr.second, u_dist = curr.first;
            pq.pop();

            for(auto i:adj[u])
            {
                int v = i.first;
                int v_dist = i.second;

                if(u_dist + v_dist < dist[v])
                {
                    dist[v] = u_dist + v_dist ;
                    pq.push({u_dist + v_dist,v});
                }
            }
        }

        return dist[d] == 1e9? -1:dist[d];
    }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */