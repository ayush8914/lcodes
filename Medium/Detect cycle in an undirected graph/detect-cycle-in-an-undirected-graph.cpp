//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    bool detect(int src,int vis[], vector<int> adj[]){
        vis[src]=1;
        queue<pair<int,int>> q;
        q.push({src,-1});
        
        while(!q.empty()){
            int u = q.front().first;
            int p = q.front().second;
            q.pop();
            
            for(auto i : adj[u]){
                if(!vis[i]){
                    vis[i]=1;
                   q.push({i,u});
                    
                }
                else if( i != p )return true;
            }
            
        }
        return false;
        
    }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int v, vector<int> adj[]) {
        int vis[v]={0};
        for(int i=0;i<v;i++){
                if(!vis[i]){
                    if(detect(i,vis,adj))return true;
                }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends