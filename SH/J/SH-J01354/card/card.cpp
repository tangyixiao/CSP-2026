#include <bits/stdc++.h>
using namespace std;
struct 
{
	long long d,s,c,o;
}arr[10000000];

int main()
{
	freopen("card5.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for (long long i=1;i<=n;i++)
	{
		cin>>arr[i].d;
	}
	for (long long i=1;i<=n;i++)
	{
		long long k=1;
		for (long long j=i;j<=n;j++)
		{
			if (arr[arr[j].d].o!=0)
			{
				for (long long l=arr[arr[j].d].o+1;l<=k;l++)
				{
					arr[arr[l].c].o=0;
					arr[l].c=0;
				}
				k=arr[arr[j].d].o+1;
				continue;
			}
			arr[k].c=arr[j].d;
			k+=1;
			arr[arr[j].d].o=k-1;
		}
		for (long long j=1;j<k;j++)
		{
			arr[arr[j].c].s+=1;
			arr[arr[j].c].o=0;
		}
	}
	for (long long i=1;i<=m;i++)
	{
		cout<<arr[i].s<<" ";
	}
	
	
	return 0;
 } 
