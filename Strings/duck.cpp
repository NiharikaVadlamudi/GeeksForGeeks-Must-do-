/*
If it has 0 in between then yes , at first alone then no.
*/

#include<bits/stdc++.h>
using namespace std;

#define ll  long int 
#define N 	26

bool duck(string s)
{	
	int i=0;
	int n=s.length();
	string letter="0";
	while(i<n)
	{	
		if(s[i]=='0' && i!=0)
			return(true);
		i++;
	}
	return(false);
}


int main()
{
	string temp;
	getline(cin,temp);
	cout<<temp<<endl;
	cout<<(int)duck(temp)<<endl;	
	return(0);
}