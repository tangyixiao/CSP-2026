#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,m,b=1,maxn=-1;
	cin>> n>>m;
	
	long long a[9999];
	
	for (int i=1;i<=n;i++) 
	{
		cin>>a[i];
		
		
	}
	a[0]=a[1];
	for (int i=1;i<=m;i++)
	{
		for (int j=1;j<=n;j++)
		{
			maxn+=max(a[j] & a[i],maxn);
		}
	}
	cout<<maxn;
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	return 0; 
}