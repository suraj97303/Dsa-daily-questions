2492. Minimum Score of a Path Between Two Cities
Medium
469
81
Companies
You are given a positive integer n representing n cities numbered from 1 to n. You are also given a 2D array roads where roads[i] = [ai, bi, distancei] indicates that there is a bidirectional road between cities ai and bi with a distance equal to distancei. The cities graph is not necessarily connected.

The score of a path between two cities is defined as the minimum distance of a road in this path.

Return the minimum possible score of a path between cities 1 and n.

Note:

A path is a sequence of roads between two cities.
It is allowed for a path to contain the same road multiple times, and you can visit cities 1 and n multiple times along the path.
The test cases are generated such that there is at least one path between 1 and n.
 

Example 1:


Input: n = 4, roads = [[1,2,9],[2,3,6],[2,4,5],[1,4,7]]
Output: 5
Explanation: The path from city 1 to 4 with the minimum score is: 1 -> 2 -> 4. The score of this path is min(9,5) = 5.
It can be shown that no other path has less score.
Example 2:


Input: n = 4, roads = [[1,2,2],[1,3,4],[3,4,7]]
Output: 2
Explanation: The path from city 1 to 4 with the minimum score is: 1 -> 2 -> 1 -> 3 -> 4. The score of this path is min(2,2,4,7) = 2.
 
  
  class Solution {
public:
    void dfs(int i, vector<int> &vis, vector<pair<int, int>> adj[], int &ans) {
        vis[i] = 1;
        for(auto it:adj[i]) {
            int j = it.first, wgt = it.second;
            ans = min(ans, wgt);
            if (!vis[j]) dfs(j, vis, adj, ans);
        }
    }

    int minScore(int n, vector<vector<int>>& roads) {
        vector<int> vis(n);
        vector<pair<int, int>> adj[n];
        for(auto it: roads) {
            adj[it[0]-1].push_back({it[1]-1, it[2]});
            adj[it[1]-1].push_back({it[0]-1, it[2]});
        }
        int ans = INT_MAX;
        dfs(0, vis, adj, ans);
        
        return ans;
    }
};
