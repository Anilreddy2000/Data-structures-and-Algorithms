#include<iostream>
using namespace std;

//function prototyping 
void A(int);
void B(int);

// NOTE : when we declare function prototyping then, we can define methods any where in the program.

int main(){
    A(20);
    return 0;
}

void A(int n){
    if(n>0){
        cout<<n<<" ";
        B(n-1);
    }
}
void B(int n){
    if(n>1){
        cout<<n<<" ";
        A(n/2);
    }
}
