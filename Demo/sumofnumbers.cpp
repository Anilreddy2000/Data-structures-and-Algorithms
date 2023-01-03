#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *arr = new int[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
     cout<<"sum of array elements :"<<sum<<endl;
    delete [] arr;
   

    return 0;
}