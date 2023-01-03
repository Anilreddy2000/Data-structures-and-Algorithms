#include<bits/stdc++.h>
using namespace std;
void finding_Duplicates(int arr[],int n){
    int last_duplicate=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1] && arr[i]!=last_duplicate){
            cout<<arr[i]<<" ";
            last_duplicate=arr[i];
        }
    }
}

int main(){
    int arr[]={1,2,3,3,4,5,5,6,7,7,8,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    finding_Duplicates(arr,n);
    return 0;
}