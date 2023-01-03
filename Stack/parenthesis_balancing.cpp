#include<bits/stdc++.h>
using namespace std;
#define max 10

class Stack{
    public:
    char arr[max];
int top = -1;
bool isEmpty(){
    if(top==-1) return true;
    return false;
}
void push(char x){
    if(top==max-1) cout<<"Stack is overflow"<<endl;
    else{
        top++;
        arr[top]=x;
    }
}
void pop(){
    if(isEmpty()) cout<<"stack is underflow"<<endl;
    else{
        char s=arr[top];
        top--;
    }
}
bool isBalanced(char ch[]){
    int n=strlen(ch);
    int i=0;
    while(n--){
        if(arr[i++]=='('){
            push('(');
        }
        if(arr[i++]==')'){
            pop();
        }
    }
    return top==-1 ? true : false;
}
};
int main(){
    char a1[]="(((a+b)*(((a+b))))))))";
    Stack st;
    cout<<st.isBalanced(a1)<<endl;
    return 0;
}