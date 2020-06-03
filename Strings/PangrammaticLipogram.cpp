/*
So,its like this : 

1.Panagram Part :
 pangram or holoalphabetic sentence is a sentence using every 
 letter of a given alphabet at least once. 

2.Lipogram Part :
Avoid few alpabets to make into Lipogram

Panagramatic Lipogram : 
It should be panagram with only the decided letter missing , 
else it its a lipogram 
If it doesnt statisfy panagram , then its only a lipogram atlaest.
*/


#include<bits/stdc++.h>
using namespace std;

#define ll  long int 
#define N 	26

void PangrammaticLipogram(string s)
{
	vector <bool>mark(N,false);
	int index=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>='A' && s[i]<='Z')
			index=s[i]-'A';
		else if(s[i]>='a' && s[i]<='z')
			index=s[i]-'a';
		else
			continue;
		mark[index]=true;
	}
	

	int cnt=0;

	for(int j=0;j<26;j++)
	{
		if(mark[j]==false)
		{
			cnt=cnt+1;
			if(cnt>1)
			{	
				cout<<cnt<<" "<<"Lipogram"<<endl;
				return;
			}
		}
		else
			continue;
	}

	if(cnt==1)
	{
		cout<<"Pangrammatic Lipogram"<<endl;
		return;
	}
	else
		cout<<"Panagram"<<endl;
	return;
}

int main()
{
	string temp;
	getline(cin,temp);
	cout<<temp<<endl;
	//cout<<"Entered word & charecter : "<<" "<<temp<<endl;
	PangrammaticLipogram(temp);	
	return(0);
}