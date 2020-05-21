#include<bits/stdc++.h>
using namespace std;

#define ll   long long int 
#define l 	 long int 
#define vec  vector<ll>


/* Simple Merge Sort

1.Sort both the arrays in ascending order...
2.Keep Merging.
3.If either one of the arrays completes first - then simply copy the remaining ..

// If 2 arrays have same number shld I include them ?
 Yes ,  X = 1 2 3 4  Y =1 2 3 4 shld give 1 1 2 2 3 3 4 4 (VV  IMP )


*/ 

ll merge(vec x, vec y , ll N,ll M)
{	
	
	sort(x.begin(),x.end());
	sort(y.begin(),y.end());

	// create a new vector . 
	vec arr(N+M,-1);
	ll i=0,j=0,k=0;
	
	// Main loop.

	
	while((i<N || j<M) && (k<(N+M)))
	{	
		//cout<<x[i]<<" "<<y[j]<<" "<<arr[k-1]<<endl;

		while(i<N && j <M)
		{
			if(x[i]<y[j])
			{
				arr[k]=x[i];
				i++;
				
			}

			else if(y[j]<x[i])
			{
				arr[k]=y[j];
				j++;
			}
			else
			{
				arr[k]=x[i];
				k++;
				arr[k]=y[j];
				i++;
				j++;
			}

		k++;
		}


		while(j<M && i>=N)
			{
				arr[k]=y[j];
				j++;
				k++;
			}
		 
		while(i<N && j>=M)
			{
				arr[k]=x[i];
				i++;
				k++;
			}

		if(k>(N+M))
			break;
		
	}

	// Printing the array . 
	for(auto it=arr.begin();it!=arr.end();it++)
		cout<<(*it)<<" ";
	cout<<endl;
}








int main()
{	
	ll T,N,M;
	cin>>T;
	ll temp=0;
	for(int i=0;i<T;i++)
	{
		cin>>N>>M;
		vec x(N,-1);
		vec y(M,-1);
		for(int j=0;j<(N);j++)
		{
			cin>>temp;
			x[j]=temp;
		}

		for(int k=0;k<(M);k++)
		{
			cin>>temp;
			y[k]=temp;
		}
		merge(x,y,N,M);
	}

	return(0);
}