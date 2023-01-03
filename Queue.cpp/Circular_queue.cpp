#include<bits/stdc++.h>
using namespace std;
#define max 10

class Queue{
    int front=0;
    int rear=0;
    public:
    int arr[max];
    void enqueue(int x){
       if((rear+1)%max == front) cout<<"Queue is overflow"<<endl;
       else{
           rear=(rear+1)%max;
           arr[rear]=x;
       }
    }
    void dequeue(){
        if(rear==front) cout<<"Queue is underflow"<<endl;
        else{
            front=(front+1)%max;
        }
    }
    void display(){
        cout<<"Queue elements are: ";
       int i=front+1;
       do{
           cout<<arr[i]<<" ";
           i=(i+1)%max;
       }while(i !=(rear+1)%max);
       cout<<endl;
    }
};
int main(){
    Queue q1;
    q1.enqueue(23);
    q1.enqueue(64);
    q1.enqueue(87);
    q1.enqueue(98);
    q1.enqueue(54);
    q1.enqueue(23);
    q1.enqueue(64);
    q1.enqueue(87);
    q1.enqueue(98);
    q1.enqueue(54);
    q1.enqueue(44);
    q1.display();
    q1.dequeue();
    q1.display();

    return 0;
}