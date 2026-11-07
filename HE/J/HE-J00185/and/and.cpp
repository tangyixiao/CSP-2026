#include <bits/stdc++.h>
using namespace std;
int m,n,a[200000],maxn=-1,x;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			x=a[i]&a[j];
			maxn=max(x,maxn);
		}
	}
	cout<<maxn;
	return 0;
}
