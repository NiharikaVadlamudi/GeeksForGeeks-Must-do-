/*
Stupid Brute Force Method- Two loops too much.
O(N2)-Time Complexity .
O(1) - Space Complexity .

Optimal HashMap: 

[Same stuff that I was saying but I dint have the damn tools!]

TOOL TO BE USED : UNORDERED_MAP (STL)

Create an empty hash table and 
insert all character of second string.
Now remove all characters of first string. 
Remaining character is the extra character.

Time Complexity:- O(n)
Auxiliary Space:- O(n).

*/

/*
Stuff about Unordered Map : 






*/

#include<bits/stdc++.h>
using namespace std;

#define ll  long int 
#define N 	26

void chardiff(string temp1,string temp2)
{
	// Create a frequency map sort of thing and cancel out stuff.
	// Running loop and storing the vals in string1.
	
	std::unordered_map<char,int> dict;
	for(int i=0;i<temp1.length();i++)
		dict[temp1[i]]++;
	
	for(int i=0;i<temp2.length();i++)
		dict.erase(temp2[i]);
	
	for(auto &x:dict)
		cout<<x.first<<" ";
	cout<<endl;

}

int main()
{
	string temp1,temp2;
	getline(cin,temp1);
	getline(cin,temp2);
	cout<<temp1<<" "<<temp2<<endl;
	chardiff(temp1,temp2);	
	return(0);
}