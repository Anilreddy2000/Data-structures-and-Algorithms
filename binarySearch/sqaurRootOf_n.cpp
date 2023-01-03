#include<bits/stdc++.h>
using namespace std;
int sqrt1(int n){
    for(int i=0;i<n;i++){
        if(i*i == n) return i;
        if(i*i > n) return i-1;
    }
}
int binary_search_On_ans_Sqrt(int n){
    int l=0,h=n;
    while(l<=h){
        int m=(l+h)/2;
        if(m*m == n) return m;
        else if(m*m >n) h=m-1;
        else{
            if((m+1)*(m+1) > n) return m;
            else l=m+1;
        }
    }
}
// given an unsorted array find the kth smallest ele in array !
// use monotonic method to solve problem.
int funC(int arr[],int n,int target){
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=target) cnt++;
    }
    return cnt;
}
int findKthSmallest(int arr[],int n,int k){
    int l=INT_MAX;
    int h=INT_MIN;
    for(int i=0;i<n;i++){
        if(l>arr[i]) l=arr[i];
    }
    for(int i=0;i<n;i++){
        if(h<arr[i]) h=arr[i];
    }
    while(l<=h){
        int m=(l+h)/2;
        int x=funC(arr,n,m);
        if(x<k) l=m+1;
        else{
            int x1=funC(arr,n,m-1);
            if(x1<k) return m;
            else l=m-1;
        }

    }

}
int main(){
    int arr[]={40,10,10,30,40,20,50,70,50};
    cout<<findKthSmallest(arr,9,6);
   // cout<<binary_search_On_ans_Sqrt(78);
    return 0;
}