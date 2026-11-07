#include <bits/stdc++.h>
using namespace std;
long long a[1000000];
vector <long long> b;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	a[0]=0;
	long long m,n,r,v=0,res=0;
	cin>>m>>n;
	r=n;
	for (long long i=1;i<=m;i++)
	{
		cin>>a[i];
	}
	if (n==1)
	{
		sort(a+1,a+n+1);
		cout<<a[m];
		return 0;
	}
	if (n==2)
	{
		for (long long i=1;i<=m;i++)
		{
			for (long long j=i;j<=m;j++)
			{
				v=max(a[i],a[j])-a[i]^a[j];
				if (v>res)
				{
					res=v;
				}
			}
		}
	}
	cout<<res;
	
	
	return 0;
 } 
