#include <bits/stdc++.h>
using namespace std;

long long n,m,a[200005],maxa=-1;
bool b[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			maxa=max(a[i]&a[j],maxa);
		}
	}
	m--;
	while(m!=0)
	{
		for(int j=1;j<=n;j++)
		{
			if(maxa&a[j]>maxa && b[j]==0)
			{
				maxa=maxa&a[j];
				b[j]=1;
		}
		}
		m--;
	}
	cout << maxa;
	return 0;
}
