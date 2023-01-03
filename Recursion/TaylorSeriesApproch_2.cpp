#include<iostream>
using namespace std;
int e(int x,int n){
    static int s=1;
    if(n==0) return s;
    else{
        s=1+x/n*s;
        e(x,n-1);
    }
    
}
int main(){
     int x=2,n=5;
     cout<<"Tylor Series sum : "<<e(x,n)<<endl;
    return 0;
}