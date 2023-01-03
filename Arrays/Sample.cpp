#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string str){
    for(int i=0;i<str.size()/2;i++){
        if(str[i]!=str[str.size()-1-i]) return false;
     }
    return true;
}
int max(int a,int b){
    if(a>b) return a;
        return b;
}    
    string longestPalindrome(string s) {
        int n=s.size();
        int maxm=INT_MIN;
        string l;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
            	string str=s.substr(i,j);
                if(isPalindrome(str)){
                    if(str.size()>=maxm){
                        maxm=max(maxm,str.size());
                        l=s.substr(i,j);
                    }
                    
                }
            }
        }
        return l;
    }
int main(){
	// string s=longestPalindrome("abacd");
	// cout<<s<<endl;
	string str = "bcabc";
	int n=str.size();
	set<int> s;
	for(int i=0;i<n;i++){
		s.insert(str[i]);
	}
	string l="";
	for(auto x:s){
		l+=x;
	}
	cout<<l<<endl;

	// string st="anilreddy";
	// string str1=st.substr(0,4);
	// cout<<"sub string is :"<<str1<<" | size is :"<<str1.size()<<endl;
	return 0;
}