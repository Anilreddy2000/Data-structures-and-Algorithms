#include<iostream>
using namespace std;
void fun(int n){
    if(n<1) return ;
    cout<<n<<" ";
    fun(n-1);
    fun(n-1);
}
// the time complexcity fo the recursioj code : O(2^n)
int main(){
    fun(3);
    return 0;
}