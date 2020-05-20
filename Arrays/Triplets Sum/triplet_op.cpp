#include<bits/stdc++.h>
using namespace std;

#define ll   long long int 
#define l 	 long int 
#define vec  vector<ll>


/*
-while loop --> vary till u get ans  type question kabatti ..
-1 outer loop.(i)
- j & k's functionality remains same .
*/


ll tripletCount(vec arr,ll N)
{	
	ll cnt=0;
	sort(arr.begin(),arr.end());

	//cout<<"Sorted.."<<endl;

	for(ll i=(N-1);i>1;i--)
	{
		//cout<<"Entered.."<<endl;
		ll j=0;
		ll k=(i-1);
		while(j<k)
		{
			if(arr[k]+arr[j]==arr[i])
			{
				cnt++;
				j++;
				k--;
			}

			else if(arr[j]+arr[k]>arr[i])
				k--;
			
			else
				j++;
		}

	}


	if(cnt==0)
		return(-1);

	return(cnt);

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
		for(ll j=0;j<N;j++)
		{
			cin>>temp;
			arr[j]=temp;
		}
		ll final=tripletCount(arr,N);
		cout<<final<<endl;
	}

	return(0);
}