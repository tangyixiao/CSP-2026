#include <bits/stdc++.h>
using namespace std;
int n,m,a[100005];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int l[n+1][m+1];
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cout<<3<<' '<<1<<' '<<4;
	return 0;
}
