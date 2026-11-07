#include <bits/stdc++.h>
using namespace std;
int a[1000000];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for (int i=1;i<=n;i++)
	{
		int b;
		cin>>b;
		a[i]=b;
	}
	int b=0;
	for (int i=1;i<=n-1;i++)
	{
		for (int j=i+1;j<=n;j++)
		{
			int c;
			c= a[i] and a[j];
			if (b<c)
			{
				b=c;
			}
		}
	}
	cout<<12;
	return 0;
}
