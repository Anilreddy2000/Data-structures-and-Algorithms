#include<bits/stdc++.h>
using namespace std;
int C(int n,int r){
    if(r==0 || n==r) return 1;
    return C(n-1,r-1)+C(n-1,r);
}
int main(){
    // pascal triangle 
     vector<int> v;
    for(int i=1;i<5;i++){
        for(int j=0;j<=i;j++){
            v.push_back(C(i,j));
        }
    }
    
    for(int i=1;i<v.size();i++){
        cout<<v[i]<<" ";
        
    }
    return 0;
}