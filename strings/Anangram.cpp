#include<bits/stdc++.h>
using namespace std;
 int main(){
     char str1[10]="decimalf";
     char str2[10]="medicald";
     if(strlen(str1)!=strlen(str2)) cout<<"two string not a anagram"<<endl;
     unordered_map<char,int> m;
     for(int i=0;i<strlen(str1);i++){
         m[str1[i]]++;
     }
     for(int i=0;i<strlen(str2);i++){
         m[str2[i]]++;
     }
     int flag=false;
     for(auto it:m){
         if(it.second<2){
             flag=true;
             break;
         }
     }
     if(flag){
         cout<<"Not a anagram !"<<endl;
     }else{
         cout<<"two string are anagram !!"<<endl;
     }
     return 0;
 }