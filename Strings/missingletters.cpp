/*
Comparison List : https://www.geeksforgeeks.org/char-vs-stdstring-vs-char-c/
*/
#include<bits/stdc++.h>
using namespace std;

#define ll  long int 
#define N 	26


void missingLetters(string s)
{
	vector <bool> mark(N,false);
	int index=0;
	string res="";
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>='A' && s[i]<='Z')
			index=s[i]-'A';
		else if(s[i]>='a' && s[i]<='z')
			index=s[i]-'a';
		else
			continue;
		mark[index]=true;
	}

	// Umm..so its push_back! How do we use that.. Need to look at strings library .
	for(int i=0;i<N;i++)
	{
		if(mark[i]==false)
			res.push_back((char)(i+'a'));
	}
	cout<<res<<endl;
}

int main()
{
	string temp;
	getline(cin,temp);
	cout<<"Entered word : "<<" "<<temp<<endl;
	missingLetters(temp);	
}