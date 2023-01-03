#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(mid==key) return mid;
        else if(key>arr[mid]) low=mid+1;
        else{
            high=mid-1;
        }
    }
}
int main(){
    int arr[]={1,3,4,6,7,9,96};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"The key element found at the this index of an array : "<<binarySearch(arr,n,7)<<endl;
    return 0;
}