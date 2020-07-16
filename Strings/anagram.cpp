// Anagram Code.
#include <bits/stdc++.h> 
using namespace std;

#define ll long long int 

bool isAnagram(string s1 , string s2)
{	
	cout<<"Entered!";
	//Dictionary
	map<char, int> countStr; 

	if(s1.length()!=s2.length())
	{	
		cout<<"Exit 1";
		return(false);
	}

	else
	{
		for(int i =0 ; i < s1.size();i++)
		{
			countStr[s1[i]]++;
			countStr[s2[i]]--;
		}
	}

	map<char, int>::iterator it;
	for(it=countStr.begin(); it!=countStr.end();it++)
	{
		if(it->second!=0)
		{	
			cout<<(it->second)<<endl;
			cout<<"Exit 2";
			return(false);
		}
	}
	cout<<"Exit 3";
	return(true);
}


// GOT IT .
int main()
{	
	string s = "anna";
	string t = "nana";
	bool val = isAnagram(s,t);
	cout<<"Result : "<<val<<endl;
	return 0 ;
}