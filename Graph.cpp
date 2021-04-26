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


8
6
1 2
1 3
2 4
5 6
6 7
6 8



#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,e;cin>>n>>e;
    list<int> v[n+1];
    for(int i=1;i<=e;i++){
        int a,b;cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    cout<<endl<<endl;

    for(int i=1;i<=n;i++){
        cout<<i<<" ->";
        for(auto j:v[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


=================================================

#include<bits/stdc++.h>
using namespace std;

void dfs(int src,bool *vis,vector<int> graph[]){
     vis[src]=true;
     cout<<src<<endl;
     for(auto child:graph[src]){
         if(!vis[child]){
             dfs(child,vis,graph);
         }
     }
}

int main(){
    int n,e;cin>>n>>e;
    vector<int> graph[n+1];
    for(int i=1;i<=e;i++){
          int a,b;cin>>a>>b;
          graph[a].push_back(b);
          graph[b].push_back(a);
    }
    bool vis[n+1];
    memset(vis,false,sizeof(vis));
    cout<<endl<<endl;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i,vis,graph);
        }
    }
}


==================================================


#include<bits/stdc++.h>
using namespace std;

void dfs(int src,bool *vis,vector<int> graph[]){
    vis[src]=true;
    cout<<src<<" ";
    for(int child:graph[src]){
        if(!vis[child]){
            dfs(child,vis,graph);
        }
    }
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
        for(auto j:graph[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<endl;
    
    bool vis[v+1];
    memset(vis,false,sizeof(vis));
    for(int i=1;i<=v;i++){
        if(!vis[i]){
            dfs(i,vis,graph);
        }
    }
}


output
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


1 2 4 6 5 3

=======================================================
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

class Tree{
    private:
       ll data;
       Tree *left,*right;
    public:
       Tree(ll data){
           this->data=data;
           this->left=this->right=NULL;
       }  
    Tree *insert(ll data,Tree *root){
           if(root==NULL)
               return new Tree(data);
           if(data<root->data)
                root->left=insert(data,root->left);
           else 
                root->right=insert(data,root->right);
            
            return root;
    }

    void inorder(Tree *root){
         if(root==NULL)
            return ;
        
         inorder(root->left);
         cout<<root->data<<" ";
         inorder(root->right);
    }

    void preorder(Tree *root){
        if(root==NULL)
           return;
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);

    }

    void postorder(Tree *root){
        if(root==NULL)
           return;
        preorder(root->left);
        preorder(root->right);
        cout<<root->data<<" ";

    }
};



int main(){
    fast;
    
    Tree *root=NULL;

    root=root->insert(10,root);
    root=root->insert(11,root);
    root=root->insert(6,root);
    root=root->insert(4,root);

    cout<<endl;

    root->inorder(root);cout<<endl;
    root->preorder(root);cout<<endl;
    root->postorder(root);cout<<endl;
    
    
    

}


output:-
===================

4 6 10 11
10 6 4 11
6 4 11 10
===========




