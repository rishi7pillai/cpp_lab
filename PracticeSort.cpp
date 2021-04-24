#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;cin>>n;
     int a[n];for(int i=0;i<n;i++) cin>>a[i];
     int m;cin>>m;
     int st=a[0];
     int nd=a[n-1];
     while(st<=nd){
         int mid=(st+nd)/2;
         if(a[mid]==m){
             cout<<m<<" is present at index :"<<mid<<endl;
             break;
         }
         else if(m>a[mid])
              st=mid+1;
         else
             nd=mid-1;

     }

}


=====================================

#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;cin>>n;
     int a[n];for(int i=0;i<n;i++) cin>>a[i];
     unordered_map<int,int> mp;
     for(int i=0;i<n;i++){
         mp[a[i]]++;
     }
     for(auto x:mp){
         cout<<x.first<<" "<<x.second<<endl;
     }

}


================================================


#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;cin>>n;
     int a[n];for(int i=0;i<n;i++) cin>>a[i];
     for(int i=1;i<n;i++){
         int temp=a[i];
         int j=i-1;
         while(temp<a[j] and j>=0){
             a[j+1]=a[j];
             j--;
         }
         a[j+1]=temp;
     }

     for(int i=0;i<n;i++) cout<<a[i]<<" ";
    

}


=============================================================

#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;cin>>n;
     int a[n];for(int i=0;i<n;i++) cin>>a[i];
     
     for(int i=0;i<n;i++){
         int pos=i;
         for(int j=i+1;j<n;j++){
             if(a[pos]>a[j])
                pos=j;
         }
         if(pos!=i){
             int temp=a[i];
             a[i]=a[pos];
             a[pos]=temp;
         }
     }



     for(int i=0;i<n;i++) cout<<a[i]<<" ";
    
}

====================================================




