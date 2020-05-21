










#include<bits/stdc++.h>
using namespace std;

#define ll   long long int 
#define l 	 long int 
#define vec  vector<ll>

/* Sum Method
When do u think it will fail ? 
1.Repeated elmts
2.Negative Integers ? 
*/ 

ll mex(vec arr,ll N)
{
	// So, N is the actual amount of integers (1 to N) undali . 
	ll asum=N*(N+1)*0.5;
	ll s=0;
	for(ll i=0;i<(N-1);i++)
		s=s+arr[i];

	ll final=asum-s;
	//cout<<"Actual Sum :"<<" "<<asum<<" "<<"Our sum"<<" "<<s<<endl;
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