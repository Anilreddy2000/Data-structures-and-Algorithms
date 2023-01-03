#include<bits/stdc++.h>
using namespace std;
int power(int x,int n){
    if(n==0) return 1;
    int xpnm = power(x,n-1);
    return x*xpnm;
}
int powerbtr(int x,int n){
    if(n==0) return 1;
    int xpnm2 = powerbtr(x,n/2);
    if(n%2==0){
        return xpnm2*xpnm2;
    }
    else{
        return xpnm2*xpnm2*x;
    }
}
void displayArrayElements(int arr[],int vidx,int n){
    if(vidx==n) return ;
   
    displayArrayElements(arr,vidx+1,n);
     cout<<arr[vidx]<<" ";
    
}
int firstIndexOf2(int arr[],int n,int idx,int target){
    if(idx==n-1){
        return -1;
    }
    if(arr[idx]==target){
        return idx;
    }else{
        firstIndexOf2(arr,n,idx+1,target);
    }
}
vector<string> getSS(string s){
    if(s.size()==0){
        vector<string> br;
        br.push_back("");
        return br;
    }
    char ch=s[0];
    string ros=s.substr(1);
    vector<string> rr=getSS(ros);
    vector<string> mr;
    for(string rs:rr){
        mr.push_back(rs);
        mr.push_back(ch+rs);
    }
    return mr;
}
vector<string> getPerm(string s){
    if(s.size()==0){
        vector<string> br;
        br.push_back("");
        return br;
    }
    char ch=s[0];
    string ros=s.substr(1);
    vector<string> rr=getPerm(ros);
    vector<string> mr;
    for(string rs : rr){
        for(int i=0;i<=rs.size();i++){
            string ms=rs.substr(0,i)+ch+rs.substr(i);
            mr.push_back(ms);
        }
    }
    return mr;
}
int main(){
    string str="abc";
    //vector<string> s=getSS(str);
    vector<string> s=getPerm(str);
    for(auto x:s){
        cout<<x<<" ";
    }
    // int arr[]={1,2,3,4,5,6,6,78,2,88};
    // int n=sizeof(arr)/sizeof(arr[0]);
    // cout<<firstIndexOf2(arr,n,0,2)<<endl;
    //displayArrayElements(arr,0,n);
   // cout<<powerbtr(2,8)<<endl;
    return 0;
}