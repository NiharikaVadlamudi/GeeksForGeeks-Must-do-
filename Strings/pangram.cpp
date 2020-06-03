/*
Pangram - A pangram is a sentence containing every letter in the English Alphabet.

1. O(N) - Maintain a Boolean array , and keep a checker .

To find its position in array :

 index = str[i] - 'A';

Basically if u print int(A) , you will get - 65 its ascii . 
So when u typecast the operations btw chars it will form into 
ascii values .Thats all :) 

1.ASCII of a and A are different ! 
2.We operate only if the charecter i between A && Z or a && z , else ignore.
3.Mark the boolean position- bool mark(26,false) this is because we don't write anything at 0 postion 

So, if A / a occupies 0 . 
how much far away is the charecter .

*/

/*
[WRONG IDEA]!!!
I was thinking summation of ASCII sum from A to Z or a to z and then
comparing it with the input sentence ka ASCII sum . 
Does the sum match then yes its a panagram ! less stringyy more numberry
*/

/*
WHY is it wrong ? 
Coz ther can be multiple alpahbets , their sum need not match exactly !
SO,since there are many cases, we can have a marking system !
*/

#include<bits/stdc++.h>
using namespace std;

#define ll  long int 
#define vec vector<string>
#define vecc vector<char>
#define N 26


bool isPangram(string s)
{
	vector <bool> mark(N,false);
	bool var=true;
	int index=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>='A' && s[i]<='Z')
		{	
			index=s[i]-'A';
			mark[index]=true;
		}

		else if(s[i]>='a' && s[i]<='z')
		{
			index=s[i]-'a';
			mark[index]=true;
		}
		else
			continue;
	}

	for(int i=0;i<N;i++)
	{
		if(mark[i]!=true)
			return(false);
	}
	return(true);
}

/*
So to get the entire sentence its better to use getline 
*/
int main()
{	
	string temp;
	getline(cin,temp);
	cout<<temp;
	cout<<(int) isPangram(temp)<<endl;
	return(0);
}