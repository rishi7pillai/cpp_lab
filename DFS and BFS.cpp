 #include<bits/stdc++.h>
 #define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 #define ll long long int
 #define endl "\n"
 using namespace std;
 
 void dfs(int src,bool *vis,vector<int> graph[]){
     vis[src]=true;
     cout<<src<<" ";
     for(auto child:graph[src]){
         if(!vis[child])
            dfs(child,vis,graph);
     } 
 }

 void bfs(int src,bool *vi,vector<int> graph[]){
     queue<int> q;
     q.push(src);
     while(!q.empty()){
         int temp=q.front();
         vi[temp]=true;
         cout<<temp<<" ";
         q.pop();
         for(auto i:graph[temp]){
             if(!vi[i]){
                 q.push(i);
                 vi[i]=true;
             }
         }
     }
 }

 int main(){
     fast;
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

     bool vis[v+1],vi[v+1];
     memset(vis,false,sizeof(vis));
     memset(vi,false,sizeof(vi));
 
     cout<<endl<<endl;
     cout<<"DFS ALGO "<<endl<<endl;
     for(int i=1;i<=v;i++){
         if(!vis[i])
            dfs(i,vis,graph);
     }

     cout<<endl<<endl;
     cout<<"BFS ALGO"<<endl<<endl;

     bfs(1,vi,graph);



    cout<<endl<<endl<<endl;
 }


output-:
6
8
1 2
1 3
2 4
2 5
3 5
4 6
4 5
5 6


1 ->2 3
2 ->1 4 5
3 ->1 5
4 ->2 6 5
5 ->2 3 4 6
6 ->4 5


DFS ALGO

1 2 4 6 5 3

BFS ALGO

1 2 3 4 5 6
