#include<iostream>
using namespace std;
// using memoization methode
// 0 1 1 2 3 5
int F[10];
int fibonacii(int n){
    if(n<=1){
        F[n]=n;
        return n;
    }
    else{
        if(F[n-2]==-1) F[n-2]=fibonacii(n-2);
        if(F[n-1]==-1) F[n-1]=fibonacii(n-1);
        return F[n-2]+F[n-1];
    }

}
int fib(int n){
    if(n<=1) return n;
    return fib(n-1)+fib(n-2);
}

int main(){
    //cout<<fib(10);
    for(int i=0;i<10;i++){
         F[i]=-1;
    }
   int n;
   cin>>n;
   cout<<n<<"th term of the fibonacci series "<<fibonacii(n)<<endl;
    return 0;
}