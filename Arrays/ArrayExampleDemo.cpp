#include <bits/stdc++.h>
using namespace std;

int main ()
{
	char string[100];
  	cout<<"Enter the string : ";
	cin >> string;
	char temp;
	int i, j;
	int n = strlen(string);
    cout<<"Original string : "<<string<<endl;
	for (i = 0; i < n-1; i++) {
		for (j = i+1; j < n; j++) {
			if (string[i] > string[j]) {
				temp = string[i];
				string[i] = string[j];
				string[j] = temp;
			}
		}	
	}
    char smallest=string[0];
	cout << "The sorted string is  assending :  "<< string<<endl;
    for (i = 0; i < n-1; i++) {
		for (j = i+1; j < n; j++) {
			if (string[i] < string[j]) {
				temp = string[i];
				string[i] = string[j];
				string[j] = temp;
			}
		}	
	}
    char largest=string[0];
    cout << "The sorted string is  decending order :  "<< string<<endl;
    cout<<"largest character is  : "<<largest<<endl;
    cout<<"smallest character is : "<<smallest<<endl;
   cout<<"frequency :"<<endl;
    unordered_map<char, int> M;

	for (int i = 0; string[i]; i++)
	{
		if (M.find(string[i]) == M.end())
		{
			M.insert(make_pair(string[i], 1));
		}
		else
		{
			M[string[i]]++;
		}
	}

	for (auto& it : M) {
		if(it.second > 1){
            cout << it.first << ' ' << it.second << '\n';
        }
	}

	return 0;
}