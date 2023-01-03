#include<bits/stdc++.h>
using namespace std;
int f(int n,vector<int> &dp){
    if(n<=2) return 1;
    if(dp[n]!=-1) return dp[n];
    dp[n]=f(n-1,dp)+f(n-2,dp);
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<f(n,dp)<<endl;
    int c;
    cin>>c;
    cout<<dp[c]<<endl;
    return 0;
}