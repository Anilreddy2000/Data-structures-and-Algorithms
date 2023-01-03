#include<bits/stdc++.h>
using namespace std;
void finding_Duplicates(int arr[],int n){
    int count;
    for(int i=0;i<n;i++){
        count=1;
        if(arr[i]!=-1){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                    arr[j]=-1;
                }
            }
            if(count>1) cout<<arr[i]<<" ";
        }
    }
}

int main(){
    int arr[]={22,5,33,7,22,33,8,12,0,9,7,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    finding_Duplicates(arr,n);
    return 0;
}