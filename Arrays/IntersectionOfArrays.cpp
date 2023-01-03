#include<bits/stdc++.h>
using namespace std;
vector<int> intersection(int A[],int m,int B[],int n){
    vector<int> v;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(A[i]==B[j]){
                v.push_back(A[i]);
            }
        }
    }
    return v;
    
}
int main(){
    int arrA[]={1,3,5,7,6,8,9};
    int m=sizeof(arrA)/sizeof(arrA[0]);
    int arrB[]={3,4,6,8,10};
    int n=sizeof(arrB)/sizeof(arrB[0]);
    vector<int> ans=intersection(arrA,m,arrB,n);
    //3,6,8
    cout<<"Intersection of the two arrays : ";
    for(auto it : ans){
        cout<<it<<" ";
    }
    return 0;
}