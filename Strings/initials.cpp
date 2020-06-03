#include<bits/stdc++.h>
using namespace std;

#define ll  long int 
#define N 	26



string intials(string s)
{	
	string res="";
	for(int i=0;i<s.length();i++)
	{
		if(i==0)
			res.push_back(toupper(s[i]));
		if(s[i]==' ')
		{	
			res.push_back(s[i]);
			i++;
			res.push_back(toupper(s[i]));
		}
	}
	return(res);
}


int main()
{
	string temp;
	getline(cin,temp);
	string res = intials(temp);
	cout<<"Name : "<<temp<<endl;
	cout<<"Initals : "<<res<<endl;	
	return(0);
}