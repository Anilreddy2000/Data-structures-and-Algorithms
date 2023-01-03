#include<bits/stdc++.h>
using namespace std;
void findingMissingElements(int arr[],int n){
    int diff=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]-i != diff){
            while(diff<arr[i]-i){
                cout<<i+diff<<" ";
                diff++;
            }
        }
    }
}
int main(){
    int arrA[]={1,2,3,5};
    int n=sizeof(arrA)/sizeof(arrA[0]);
    findingMissingElements(arrA,n);
    cout<<endl;
    return 0;
   
}