#include<bits/stdc++.h>
using namespace std;

class Stack{
       public:
          queue<int> q1,q2;
       
       void push(int data){
            q1.push(data);
       }
       int pop(){
           if(q1.empty())
               return -1;
            
            while(q1.size()!=1){
                q2.push(q1.front());
                q1.pop();
            }

            int temp=q1.front();
            q1.pop();

            queue<int> qu=q1;
            q1=q2;
            q2=qu;

            return temp;
       }

};

int main(){

    Stack st;
    st.push(5);
    st.push(6);
    st.push(7);

    cout<<endl<<endl;

    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    

    cout<<endl<<endl;


}
