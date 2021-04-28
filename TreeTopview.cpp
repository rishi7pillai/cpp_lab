#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n";
using namespace std;

class Tree{
    private:
        int data;
        Tree *left,*right;
    public:
       Tree(int data){
           this->data=data;
           this->left=this->right=NULL;
       }
    Tree *insert(int data,Tree *root){
        if(root==NULL)
           return new Tree(data);
        if(data<root->data){
            root->left=insert(data,root->left);
        }
        if(data>root->data){
            root->right=insert(data,root->right);
        }

        return root;
    }

    void inorder(Tree *root){
          if(root==NULL)
               return;
         
          inorder(root->left);
          cout<<root->data<<" ";
          inorder(root->right);
    }

    void top_view(Tree *root){
        map<int,int> mp;
        queue<pair<Tree *,int>> q;
        q.push({root,0});
        while(!q.empty()){
            auto temp=q.front();
            q.pop();
            int hd=temp.second;
            auto node=temp.first;
            if(mp.count(hd)==0){
                mp[hd]=node->data;
            }
            if(node->left)
                q.push({node->left,hd-1});
            if(node->right)
                q.push({node->right,hd+1});
        }

        for(auto x:mp){
            cout<<x.second<<" ";
        }

    }

   
};

int main(){

    Tree *root=NULL;
    root=root->insert(5,root);
    root=root->insert(9,root);
    root=root->insert(3,root);
    root=root->insert(6,root);
    root=root->insert(2,root);

    cout<<endl;cout<<endl;cout<<"Top view"<<endl;

    root->top_view(root);


cout<<endl;cout<<endl;
}
