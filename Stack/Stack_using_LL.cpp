#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
struct Node* head=NULL;
void push(int x){
    Node* temp=new Node(x);
    if(!head){
        head=temp;
    }else{
        temp->next=head;
        head=temp;
    }
}
void pop(){
    Node* t;
    if(!head){
        delete head;
    }else{
        t=head;
        head=head->next;
        delete t;
    }
}
void display(){
    Node* curr=head;
    cout<<"stack elements : ";
    while(curr){
        cout<<curr->data<<"->";
        curr=curr->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    push(12);
    push(23);
    push(34);
    push(67);
    display();
    pop();
    display();
    push(54);
    push(67);
    display();
    pop();
    pop();
    display();

    return 0;
}