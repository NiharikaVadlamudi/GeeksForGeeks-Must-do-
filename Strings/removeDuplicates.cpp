#include <bits/stdc++.h> 
using namespace std;

#define ll long long int 


struct Node { 
    bool val=false;
};

/*
Removing all duplicates in a string within the string.
*/
void uniqueLetters(string s)
{
	map <char,Node> checkMap;
	int n = s.length();
	vector<char> final;
	for(int i=0;i < n;i++)
	{
		if(checkMap[s[i]].val==false)
		{
			final.push_back(s[i]);
			checkMap[s[i]].val=true;
		}
	}
	for(auto it=final.begin() ; it!=final.end();it++)
	{
		cout<<(*it);
	}
}


int main()
{	
	string a ;
	getline(cin,a);
	uniqueLetters(a);
	return(0);
}