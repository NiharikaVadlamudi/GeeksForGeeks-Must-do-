/*
Whats happening here ? 
- Well we have a nice variable - index , and we keep 
incrementing it as we go deeper . 
- So , at each recusive call we copy s1@idx to s2@idx and move on..
- We do till we reach end of string 1 , since thats enough na ! if string 1 is 
over then we dont have anything to move forward to !
*/

#include<bits/stdc++.h>
using namespace std;

#define ll  long int 
#define N 	1000
#define vec vector<string>



void recursiveCopy(char s1[],char s2[],int index=0)
{
	// Base class - stop when u reach end of first word .
	if(s1[index]=='\0')
		return;

	// Recursive Call - else make changes at the index .
	s2[index]=s1[index];
	index++;
	recursiveCopy(s1,s2,index);

}


int main()
{
	char s2[100]="niharika";
	char s1[100]="microsoft";
	recursiveCopy(s1,s2);
	cout<<s2<<endl;
	return(0);
}	