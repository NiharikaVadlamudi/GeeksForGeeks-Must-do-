#include<bits/stdc++.h>
using namespace std;

#define ll   long long int 
#define l 	 long int 
#define vec  vector<ll>


void alternate(vec arr,ll N)
{
	//Sorted Array.
	// Space Optimisation ,not Time Optimisation question .. I think based on swap . 
	// I ain't sure .. thats y they are saying O(1) space extra.. 
	ll temp=0;
	for(ll i=0,j=(N-1);i<N,j>=0;i++,j--)
	{
		if(i<j)
			cout<<arr[j]<<" "<<arr[i]<<" ";

		else if(i==j)
		{
			if(N%2!=0)
				cout<<arr[i]<<" ";
		}		
		else
			break;
	}
	cout<<endl;
}



int main()
{	
	ll T,N;
	cin>>T;
	ll temp=0;
	for(int i=0;i<T;i++)
	{
		cin>>N;
		vec arr(N,0);
		for(int j=0;j<(N);j++)
		{
			cin>>temp;
			arr[j]=temp;
		}
		alternate(arr,N);
	}

	return(0);
}