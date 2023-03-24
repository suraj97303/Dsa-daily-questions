There are n cities numbered from 0 to n - 1 and n - 1 roads such that there is only one way to travel between two different cities (this network form a tree). Last year, The ministry of transport decided to orient the roads in one direction because they are too narrow.

Roads are represented by connections where connections[i] = [ai, bi] represents a road from city ai to city bi.

This year, there will be a big event in the capital (city 0), and many people want to travel to this city.

Your task consists of reorienting some roads such that each city can visit the city 0. Return the minimum number of edges changed.

It's guaranteed that each city can reach city 0 after reorder.

 

Example 1:


Input: n = 6, connections = [[0,1],[1,3],[2,3],[4,0],[4,5]]
Output: 3
Explanation: Change the direction of edges show in red such that each node can reach the node 0 (capital).
Example 2:


Input: n = 5, connections = [[1,0],[1,2],[3,2],[3,4]]
Output: 2
Explanation: Change the direction of edges show in red such that each node can reach the node 0 (capital).
Example 3:

Input: n = 3, connections = [[1,0],[2,0]]
Output: 0
 
  
  
  class Solution {
public:
    int c=0;
    void dfs(vector<vector<pair<int,int>>>&adj ,int node,vector<bool>&vis){
        vis[node]=true;
        for(auto &e:adj[node]){
            if(!vis[e.first]){
                
                if(e.second==1){
                    c++;
                }
                 dfs(adj,e.first,vis);
                
            }
        }
    }
    int minReorder(int n, vector<vector<int>>& con) {
        vector<vector<pair<int,int>>>adj(n);
        for(auto &e:con){
            adj[e[0]].push_back({e[1],1});
            adj[e[1]].push_back({e[0],0});
        }
        vector<bool>vis(n,false);
        dfs(adj,0,vis);
        return c;
    }
};
