#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void display(vector<int> adj[],int v){
    for(int i=0;i<v;i++){
        cout<<i<<" ";
        for(auto x:adj[i]){
            cout<<"->"<<x;
        }
        cout<<endl;
    }
}
void bfsOfGraph(int V,vector<int> adj[]){
    vector<int> vis(V+1,0);
    //0 0 0 0 0  0 0

    for(int i=1;i<=V;i++){
        if(!vis[i]){
            queue<int> q;
            q.push(i);
            vis[i]=1;
            while(!q.empty()){
                int node=q.front();
                q.pop();
              cout<<node<<" ";
                for(auto x:adj[node]){
                    if(!vis[x]){
                        q.push(x);
                        vis[x]=1;
                    }
                }
            }
        }
    }
   
}
void dfs(int node,vector<int>& vis,vector<int> adj[],vector<int>& storedfs){
    storedfs.push_back(node);
    vis[node]=1;
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,vis,adj,storedfs);
        }
    }
}
vector<int> dfsGraph(int v,vector<int> adj[]){
    vector<int> storedfs;
    vector<int> vis(v+1,0);
    for(int i=0;i<v;i++){
        if(!vis[i]){
            dfs(i,vis,adj,storedfs);
        }
    }
    return storedfs;
}
int main(){
    int V=5;
    vector<int> adj[V];
    addedge(adj,0,3);
    addedge(adj,3,4);
    addedge(adj,2,4);
    addedge(adj,1,3);
   // display(adj,V);
    
  // bfsOfGraph(V,adj);
   vector<int> dfs=dfsGraph(V,adj);
   for(auto x : dfs){
    cout<<x<<" ";
   }
    return 0;
}