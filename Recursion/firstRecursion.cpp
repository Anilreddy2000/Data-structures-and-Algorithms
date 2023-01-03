#include<iostream>
using namespace std;
void fun(int n){
    if(n<1) return;
    cout<<n<<" ";
    fun(n-1);
   // cout<<endl;
    cout<<n<<"  ";
}
int main(){
    fun(4);
    return 0;
}