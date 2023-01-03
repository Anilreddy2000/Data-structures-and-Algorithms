#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
Node* head=NULL;
Node* tail=NULL;
void insertValueIntoLinkedList(int x){
    Node* temp=new Node(x);
    if(!head){
        head=temp;
        tail=temp;
    }else{
        tail->next=temp;
        tail=tail->next;
    }
}
void Display(){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<"->";
        temp=temp->next; 
    }
    cout<<"Null"<<endl;
}
bool SearchElement_In_LL(int key){
    Node* curr = head;
    while(curr){
        if(curr->data == key) return true;
        curr=curr->next;
    }
    return false;
}
void InsertElementAtPosition(int pos,int x){
    if(pos==1){
        Node* h=new Node(x);
        h->next=head;
        head=h;
    }else{
        Node* curr=head;
        for(int i=0;i<pos-2;i++){
            curr=curr->next;
        }
        Node* temp=curr->next;
        Node* h=new Node(x);
        curr->next=h;
        h->next=temp;
    }
}
void DeleteElementAtPosition(int pos){
    if(pos==1){
        Node* t=head;
        head=head->next;
        delete(t);
    }else{
        Node* curr=head;
        for(int i=0;i<pos-2;i++){
            curr=curr->next;
        }
        Node* temp=curr->next;
        curr->next=curr->next->next;
        delete(temp);
    }
}
int middleElementInLL(){
    Node* temp=head;
    int cnt=0;
    while(temp){
        temp=temp->next;
        cnt++;
    }
    temp=head;
    int c=0;
    while(c<cnt/2){
        temp=temp->next;
        c++;
    }
    return temp->data;
}
int middleElementInLL1(){
    Node* slow=head;
    Node* fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow->data;
}
Node* middleElement(){
    Node* slow=head;
    Node* fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
void  reverseLL(){
    Node* prev=NULL;
    Node* curr=head;
    Node* temp;
    while(curr){
        temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    Node* t=prev;
    while(t){
        cout<<t->data<<"->";
        t=t->next; 
    }
    cout<<"Null"<<endl;
}
Node* rev(Node* p){
    if(!p || !(p->next)) return p;

    Node* temp=p->next;
    p->next=NULL;
    Node* h=rev(temp);
    temp->next=p;
    return h;
}
void ReverseLLByRecursion(){
    Node* h=head;
    Node* t=rev(h);
    while(t){
        cout<<t->data<<"->";
        t=t->next; 
    }
    cout<<"Null"<<endl;
    
}
Node* Reverse(Node* p){
    Node* curr=p;
    Node* prev=NULL;
    Node* t;
    while(curr){
        t=curr->next;
        curr->next=prev;
        prev=curr;
        curr=t;
    }
}
bool ispalindrome(){
    Node* mid=middleElement();
    Node* t=Reverse(mid);
    Node* h=head;
    while(h && t){
        if(h->data != t->data){
            return false;
        }
        h=h->next;
        t=t->next;
    }
    return true;
}
bool isCyclic(){
    Node* curr=head;
    map<Node*,bool> NodeMap;
    while(curr){
        if(NodeMap.find(curr) != NodeMap.end()) return true;
        NodeMap[curr]=true;
        curr=curr->next;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    while (n--)
    {
        int x;
        cin>>x;
        insertValueIntoLinkedList(x);
    }
    Display();
    if(SearchElement_In_LL(7)){
        cout<<"Search Element is found !!"<<endl;
    }else{
        cout<<"Search Element is not Found !!"<<endl;
    }
    //InsertElementAtPosition(5,76);
   // Display();
   // DeleteElementAtPosition(4);
   // Display();
   // cout<<"middle element in the LinkedList : "<<middleElementInLL()<<endl;
    cout<<"middle element in the LinkedList : "<<middleElementInLL1()<<endl;
   // reverseLL();
    // if(ispalindrome()){
    //     cout<<"Given LinkedList is palindrome !!"<<endl;
    // }else{
    //     cout<<"Given LinkedList is not A palindrome !!"<<endl;
    // }
    if(isCyclic()){
        cout<<"LinkedList has cyclic "<<endl;
    }else{
        cout<<"LinkedList has No Cyclic "<<endl;
    }
    return 0;
}