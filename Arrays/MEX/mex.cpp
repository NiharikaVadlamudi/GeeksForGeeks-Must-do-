#include<bits/stdc++.h>
using namespace std;

#define ll   long long int 
#define l 	 long int 
#define vec  vector<ll>

 
/*
3 ways to do MEX : 

1.Sum of N numbers .
2.XOR method 

*/


ll mex(vec arr,ll N)
{	
	ll xorsum=1;
	//Compute XOR till 1 to N numbers . 
	// is 0 included in the list ? (Nope)
	ll i=2;
	while(i<=N)
	{
		xorsum=xorsum^i;
		i++;
	}

	ll oursum=arr[0];
	// for given array 
	for(ll j=1;j<(N-1);j++)
		oursum=oursum^arr[j];
	
	//cout<<"Oursum"<<" "<<oursum<<" "<<"XOR sum "<<xorsum<<" "<<endl;
	ll final=oursum^xorsum;

	return(final);
}

int main()
{	
	ll T,N;
	cin>>T;
	ll temp=0;
	for(int i=0;i<T;i++)
	{
		cin>>N;
		vec arr(N-1,0);
		for(int j=0;j<(N-1);j++)
		{
			cin>>temp;
			arr[j]=temp;
		}
		ll final=mex(arr,N);
		cout<<final<<endl;
	}

	return(0);
}