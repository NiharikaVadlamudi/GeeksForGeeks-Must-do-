/*
My idea: Use the difference in numbers sort of way 
Like how far is the new charecter set from the old one . 
What actually they are suggesting : HASHING :) 
*/

#include<bits/stdc++.h>
using namespace std;

#define ll  long int 
#define N 	26
#define oldcharlist "abcdefghijklmnopqrstuvwxyz"


string newstring(string s , string newcharlist)
{	
	string res="";
	// Unordered_map again.

	if(newcharlist.length()==N)
	{
		unordered_map<char,char> mapping;
		for(int i=0;i<N;i++)
			mapping[newcharlist[i]]=oldcharlist[i];
		for(int i=0;i<s.length();i++)
			res.push_back(mapping[s[i]]);
		return(res);
	}
	else
		return(NULL);	
}

int main()
{
	string temp,newcharlist;
	getline(cin,temp);
	getline(cin,newcharlist);
	cout<<"Word : "<<temp<<endl;
	cout<<"New Charecter list :"<<newcharlist<<endl;
	cout<<newstring(temp,newcharlist)<<endl;	
	return(0);
}