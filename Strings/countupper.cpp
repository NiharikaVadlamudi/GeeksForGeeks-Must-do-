/*

Given a string, write a program to count the occurrence of 
Lowercase characters,
Upppercase characters, Special characters,
and Numeric values.


What are special charecters? 

https://en.cppreference.com/w/cpp/language/ascii

-ASCII vals from
 32 to 47 are punctautors (special)
48-57 are 0 to 9
58 to 64 are also special chars
65 - 90 Uppercase alaphabets
91-96 special
97 - 122 a to z
123 - 126 are punctuators and braces .

OK , special charectors put it as else !
Only figure out other ranges properly.

Good question : I learnt how ascii values are divided
need to byheart the commong ranges atleast .

Remember thiss : 

A : 65 
Z : 65+25=90 (remove A)

a : 122 
z : 122+25= 147 

0 : 48 
9 : 48 + 9 = 57 

*/



#include<bits/stdc++.h>
using namespace std;

#define ll  long int 
#define N 	1000
#define vec vector<string>

void cntCases(string s)
{	
	int numCount=0,upperCount=0,lowerCount=0,splCount=0;
	for(int i=0;i<s.length();i++)
	{
		long int ascii = s[i];

		if(ascii>=48 && ascii<=57)
			numCount++;
		else if(ascii>=97 && ascii<=122)
			lowerCount++;
		else if(ascii>=65 && ascii<=90)
			upperCount++;
		else
			splCount++;
	}

	cout<<"Details :"<<endl;
	cout<<"Special Charecters : "<<splCount<<endl;
	cout<<"Uppercase Charecters : "<<upperCount<<endl;
	cout<<"Lowercase Charecters : "<<lowerCount<<endl;
	cout<<"Numerical Charecters : "<<numCount<<endl;

}



int main()
{
	string temp;
	getline(cin,temp);
	cntCases(temp);
	return(0);
}