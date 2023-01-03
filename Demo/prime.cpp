#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    if(isPrime(n)) cout<<"Given number is Prime";
    else cout<<"Given number is not a Prime";
    return 0;
}