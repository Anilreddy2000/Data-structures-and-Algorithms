#include<bits/stdc++.h>
using namespace std;
#define MAX 10
class Stack{
    int top;
    public:
    int s[MAX];
    Stack(){ 
        top=-1;
    }
    void push(int x){
        if(top==(MAX-1)){
            cout<<"stack is overflow"<<endl;
        }else{
            top++;
            s[top]=x;
            cout<<x<<"  is pushed into stack"<<endl;
        }
    }
    void pop(){
        if(top == -1){
            cout<<"stack is underflow"<<endl;
        }else{
            int x = s[top];
            top--;
            // cout<<x<<" is poped from the stack "<<endl;
        }
    }
    int peek(){
          if(top==(MAX-1)){
            cout<<"stack is overflow"<<endl;
            return 0;
        }else{
            int x=s[top];
            return x;
        }

    }
    bool isEmpty(){
       return top<0;
    }
    void display(){
        cout<<endl<<"Stack elements are : "<<endl;
        while(!isEmpty()){
            cout<<peek()<<endl;
            pop();
        }
        cout<<endl;
    }

};
int main(){
    Stack s1;
    s1.push(23);
    s1.push(34);
    s1.push(44);
    s1.display();
    return 0;
}