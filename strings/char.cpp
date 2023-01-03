#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch[10];
    // ch is for just for one word !!
    gets(ch);// for line or sentance
    int size;
    for(size=0;ch[size]!='\0';size++){

    }
    cout<<"size of the string : "<<size<<endl;
    cout<<"size of the string : "<<strlen(ch)<<endl;
    for(int i=0;i<10;i++){
        cout<<ch[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i<10; i++)
    {
        ch[i]=ch[i]-32;
    }
    cout<<ch<<endl;
    
    return 0;
}