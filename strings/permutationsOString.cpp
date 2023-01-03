#include<bits/stdc++.h>
using namespace std;
void permute(string,int,int);

int main(){
    string str="abc";
    permute(str,0,2);
    return 0;
}

void permute(string a,int l,int r){
    if(l==r) cout<<a<<endl;
    for(int i=l;i<=r;i++){
        swap(a[l],a[i]);
        permute(a,l+1,r);
        swap(a[i],a[i]);
    }
}