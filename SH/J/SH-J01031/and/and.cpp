#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	long long arr[n];
	for (int i=0;i<n;i++)
	{
    	cin>>arr[i];
	}
	long long maxx=0;       
	long long a=1;                    
	for (long long i=0;i<n;i++)
	{
		for (long j=i+1;j<n;j++)
		{
		    a=arr[i]&arr[j];
			if (a>=maxx)
			{
				maxx=a;
			}
		}	
	}
	cout<<maxx;
	return 0;
}
