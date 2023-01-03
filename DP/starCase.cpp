#include<bits/stdc++.h>
using namespace std;
// starCase or climbDown problem...
int starCase(int n,vector<int> &dp){
    if(n<0) return 0;
    if(n==1 || n==0) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=starCase(n-1,dp)+starCase(n-2,dp)+starCase(n-3,dp);
}
int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<starCase(n,dp);
    return 0;
}