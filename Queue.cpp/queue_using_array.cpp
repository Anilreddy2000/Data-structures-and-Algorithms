#include<bits/stdc++.h>
using namespace std;
#define max 100

class Queue{
    int front=-1;
    int rear=-1;
    public:
    int arr[max];
    void enqueue(int x){
        if(rear==max-1) cout<<" Queue is overflow "<<endl;
        else{
            rear++;
            arr[rear]=x;
        }

    }
    void dequeue(){
        if(rear==front) cout<<" Queue is underflow "<<endl;
        else{
            front++;

        }
    }
    void display(){
        cout<<" Queue elements are : ";
        for(int i=front+1;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
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
    q1.display();
    q1.dequeue();
    q1.display();

    return 0;
}