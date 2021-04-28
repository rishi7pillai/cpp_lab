#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;

void dfs(int src,bool *vis,vector<int> graph[]){
    vis[src]=true;
    cout<<src<<" ";
    for(auto child:graph[src]){
        if(!vis[child]){
            dfs(child,vis,graph);
        }
    }
}

void bfs(int src,bool *vis,vector<int> graph[]){
    vis[src]=true;
    queue<int> q;
    q.push(src);
    while(!q.empty()){
        auto temp=q.front();
        cout<<temp<<" ";
        q.pop();
        for(auto child:graph[temp]){
               if(!vis[child]){
                   q.push(child);
                   vis[child]=true;
               }
        }
    }
}

bool is_cycle(int src,bool *vis,int parent,vector<int> graph[]){
     vis[src]=true;
     for(auto child:graph[src]){
         if(!vis[child]){
              bool cycle=is_cycle(child,vis,src,graph);
              if(cycle)
                   return true;
         }
         else if(src!=parent){
             return true;
         }

     }
     return false;
}


int main(){
    int v,e;cin>>v>>e;
    vector<int> graph[v+1];
    for(int i=1;i<=e;i++){
        int a,b;cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    
    cout<<endl<<endl;

    for(int i=1;i<=v;i++){
        cout<<i<<" ->";
        for(auto j:graph[i])
            cout<<j<<" ";
        cout<<endl;
    }

    bool vis[v+1],vi[v+1],visited[v+1];
    memset(vis,false,sizeof(vis));
    memset(vi,false,sizeof(vi));
    memset(visited,false,sizeof(visited));

    cout<<endl<<endl;
    // cout<<"DFS algo "<<endl;
    // dfs(1,vis,graph);

    // cout<<"BFS Algo"<<endl;
    //  bfs(1,vi,graph);


     bool x=is_cycle(1,visited,1,graph);
     cout<<x<<endl;


cout<<endl<<endl;    
}
