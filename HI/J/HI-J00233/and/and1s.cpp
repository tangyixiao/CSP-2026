#include <bits/stdc++.h>
using namespace std;
int n,m,a[1000000000],x,y;
int main()
{
	freopen("andin","r",stdin);
	freopen("andout","w",stdout);
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=i+1;j<=m;j++)
		{
			if((a[i]&a[j])>x)
			{
				x=(a[i]&a[j]);
			}
		}
	}
	cout << x;
	return 0;
}
