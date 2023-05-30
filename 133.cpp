/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution 
{
public:
    unordered_map<Node*,Node*>mp;
    void dfs(Node* node,Node*clone_node)
    {
        for(Node* nbr:node->neighbors)
        {
            if(mp.find(nbr) == mp.end())
            {
                Node*clone_nbr = new Node(nbr->val);
                mp[nbr] = clone_nbr;
                clone_node->neighbors.push_back(clone_nbr);

                dfs(nbr,clone_nbr);
            }
            else
            {
                clone_node->neighbors.push_back(mp[nbr]);
            }
        }
    }
    Node* cloneGraph(Node* node) 
    {
        if(!node) return NULL;

        Node* clone_node = new Node(node->val);
        mp[node] = clone_node;

        dfs(node,clone_node);

        return clone_node;
    }
};
