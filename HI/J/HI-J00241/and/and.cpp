#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],g,f;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			f=a[i] and a[i+j];
			g=max(f,g);
	    }
	}
	cout<<g;
	return 0;
}
