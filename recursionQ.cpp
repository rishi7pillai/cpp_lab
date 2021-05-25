#include <iostream>
using namespace std;

int search(int a[],int st,int nd,int s){
     if(st>nd)
         return -1;
     if(a[st]==s)
         return st;
     if(a[nd]==s)
         return nd;
     else
        return search(a,st+1,nd-1,s);
}

int main() 
{
    int n;cin>>n;
    int a[n];for(int i=0;i<n;i++) cin>>a[i];
    
    int s;cin>>s;
    
    int item=search(a,0,n-1,s);
    if(item>=0)
       cout<<item<<endl;
    else
       cout<<"Element is not there"<<endl;
    
    return 0;
}


============================================

#include <iostream>
using namespace std;


bool pali(string s,int st,int nd){
    if(st==nd)
       return true;
    if(s[st]!=s[nd])
       return false;
    
    if(st<nd+1)
       return pali(s,st+1,nd-1);
    
    return true;
}

int main() 
{
    string s;cin>>s;
    int n=s.size()-1;
    
    if(pali(s,0,n))
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not"<<endl;
}
===================================================
void revrs(string s){
    if(s.size()==0)
       return;
    
    revrs(s.substr(1));
    
    cout<<s[0];
       
}


int main() 
{
    string s;cin>>s;
    
    revrs(s);
    
    
}
============================================

