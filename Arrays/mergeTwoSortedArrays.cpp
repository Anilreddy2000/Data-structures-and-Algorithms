#include<bits/stdc++.h>
using namespace std;
void Merge(int A[],int m,int B[],int n,int ans[]){
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(A[i]<B[j]){
            ans[k++]=A[i++];
        }
        else{
            ans[k++]=B[j++];
        } 
    }
    while(i<n){
        ans[k++]=A[i++];
    }
    while (j<n)
    {
        ans[k++]=B[j++];
    }
   
}
int main(){
    int arrA[]={1,3,5,7,9};
    int m=sizeof(arrA)/sizeof(arrA[0]);
    int arrB[]={2,4,6,8,10};
    int n=sizeof(arrB)/sizeof(arrB[0]);
    int a[m+n];
    Merge(arrA,m,arrB,n,a);
    for (int i = 0; i < m+n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    cout<<endl;
    return 0;
}