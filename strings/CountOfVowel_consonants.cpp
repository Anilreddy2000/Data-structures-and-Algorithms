#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch[50]="hey there qduygusduwdje";
    int vcnt=0,ccnt=0;
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]=='a' || ch[i]=='A' || ch[i]=='e' || ch[i]=='E' || ch[i]=='i' || ch[i]=='I' || ch[i]=='o' || ch[i]=='O' || ch[i]=='u' || ch[i]=='U'){
            vcnt++;
        }
        else if(ch[i]>=65 && ch[i]<90 || ch[i]>=97 && ch[i]<122){
            ccnt++;
        }
    }
    cout<<"vowel count "<<vcnt<<endl;
    cout<<"consonant count "<<ccnt<<endl;
    return 0;
}