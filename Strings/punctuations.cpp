/*

Set of punctuators : 
!"#$%&'()*+,-./:;?@[\]^_`{|}~

We can do it tradition using if -else & stuff but 
here we have ispunct() fucntion to save us .

-Neither alphanumeric nor space .
-> ctype.h
*/


#include<bits/stdc++.h>
using namespace std;

#define ll  long int 
#define N 	26

void punctuate(string s)
{	
	string res="";
	for(int i=0;i<s.length();i++)
	{
		if(!ispunct(s[i]))
			res.push_back((char)(s[i]));
	}
	cout<<res<<endl;
}


int main()
{
	string temp;
	getline(cin,temp);
	cout<<temp<<endl;
	punctuate(temp);	
	return(0);
}