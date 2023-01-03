#include<iostream>
using namespace std;
int fun(int n){
    static int x=0;
    if(n<1) return n;
    x++;
    return fun(n-1)+x;
}
int main(){
    cout<<"Sum of the numbers with static variable x : "<<fun(5)<<endl;
    return 0;
}