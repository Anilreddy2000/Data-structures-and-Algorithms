#include<bits/stdc++.h>
using namespace std;
void finding_Duplicates_hashing(int arr[],int n){
   map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(auto it : m){
        if(it.second>1){
            cout<<it.first<<"-> "<<it.second<<endl;
        }
    }
}
int main(){
    int arr[]={22,5,33,7,22,33,8,12,0,9,7,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    finding_Duplicates_hashing(arr,n);
    return 0;
}