#include <bits/stdc++.h>
using namespace std;
int n,m,a[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(a[j]>a[j-1])
			{
				int c=a[j];
				a[j]=a[j-1];
				a[j-1]=c;
			}
		}
	}
	int minn=1000000;
	for(int i=1;i<=m;i++)
	{
		minn=min(minn,a[i]);
	}
	cout<<minn;
}
