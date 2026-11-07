#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,a[N];
long long ans;
char c[N];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i=1;i<=n;i++)
	{
		cin >> a[i] >> c[i];
	}
	for (int x=1,y=n;y>x;)
	{
		if (c[x]!=c[y])
		{
			if (a[x]>a[y])
			{
				ans+=a[y];
				a[x]-=a[y];
				y--;
			}
			else if (a[x]==a[y])
			{
				ans+=a[x];
				x++;
				y--;
			}
			else
			{
				ans+=a[x];
				a[y]-=a[x];
				x++;
			}
		}
		else
		{
			if (a[x]>a[y])
			{
				a[x]-=a[y];
				y--;
			}
			else if (a[x]==a[y])
			{
				x++;
				y--;
			}
			else
			{
				a[y]-=a[x];
				x++;
			}
		}
	}
	cout << ans;
	return 0;
}