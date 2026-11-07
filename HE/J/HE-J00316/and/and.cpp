#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[10005],x,z=0;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<=m;j++)
		{
			x=a[i]&a[j];
			if(x>z)
			{
				z=x;
			}
		}
	}
	cout<<z;
	return 0;
}
