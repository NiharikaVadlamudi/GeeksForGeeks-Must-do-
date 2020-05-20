#include<bits/stdc++.h>
using namespace std;

#define ll   long long int 
#define l 	 long int 
#define vec  vector<ll> 


/*

1.After sorting greatest elmt will be at last , 
so we shall start from there --> i . 
i start-> (N-1)
i ends - >3 

2. 2 variables j,k 
j-->Traverses from front (0)
k-->Traveres from back (i-1)
* j<k (else it doesnt make sense)
* k<(i)=> k starts at (i-1) and goes till 0 . 
* j & k can stop when they are at equal co-ordinates.

*/

ll tripletCount(vec arr,ll N)
{
	ll cnt=0;
	sort(arr.begin(),arr.end());

	for(int i=(N-1);i>1;i--)
	{
		for(int k=(i-1);k>0;k--)
		{
			for(int j=0;j<k;j++)
			{
				ll s=arr[k]+arr[j];
				//cout<<arr[k]<<" "<<arr[j]<<" "<<s<<" "<<"->"<<arr[i]<<endl;
				if(s==arr[i])
					cnt=cnt+1;
			}
		}
	}
	if(cnt>0)
		return(cnt);

	return(-1);
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
		for(int j=0;j<N;j++)
		{
			cin>>temp;
			arr[j]=temp;
		}
		ll final=tripletCount(arr,N);
		cout<<final<<endl;
	}

	return(0);
}