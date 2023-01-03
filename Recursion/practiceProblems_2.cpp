#include<bits/stdc++.h>
using namespace std;
// get keypad characters
string getChoice(char key){
    if(key == '1') return "abc";
    else if(key == '2') return "def";
    else if(key == '3') return "ghi";
    else if(key == '4') return "jkl";
    else if(key == '5') return "mno";
    else if(key == '6') return "pqr";
    else if(key == '7') return "stu";
    else if(key == '8') return "vwx";
    else if(key == '9') return "yz";
    else if(key == '0') return "abc";
    return "";
}
vector<string> getKPC(string s){
   if(s.size()==0){
    vector<string> br;
    br.push_back("");
    return br;
   }
   char ch=s[0];
   string ros=s.substr(1);
   vector<string> rr=getKPC(ros);
   vector<string> mr;
   string choice=getChoice(ch);
   for(string rs : rr){
    for(int i=0;i<choice.size();i++){
        string ms=choice[i]+rs;
        mr.push_back(ms);
    }
   }
   return mr;
}
int main(){
    vector<string> str=getKPC("123");
    for(string s: str){
        cout<<s<<" ";
    }
    return 0;
}