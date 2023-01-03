#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
   cin>>n;
    int first=0;
    int second=1;
    for(int i=2;i<=n;i++){
        int t=first+second;
        first=second;
        second=t;
       
    }
    cout<<n<<"th fabonacci number is : "<<second<<endl;
    return 0;
}