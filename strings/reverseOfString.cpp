#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="something_important";
    string s="";
    int n=str.size();
    for(int i=n-1;i>=0;i--){
        s+=str[i];
    }
    cout<<s<<endl;
    return 0;
}