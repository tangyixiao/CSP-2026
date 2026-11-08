#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n, a[200005]={};
	char b[200005]={};
	cin >> n;
	int x=1, y=n;
	long long cnt=0;
	for(int i=1; i<=n; i++)
	{
		cin >> a[i];
		cin >> b[i];
	}
	while(x<y)
	{
		if(b[x] != b[y])
		{
			if(a[x]>a[y])
			{
				cnt += a[y];
				a[x] -= a[y];
				y--;
			}
			else if(a[x]==a[y])
			{
				cnt += a[y];
				x++;
				y--;
			}
			else if(a[x]<a[y])
			{
				cnt += a[x];
				a[y] -= a[x];
				x++;
			}
		}
		else
		{
			if(a[x]>a[y])
			{
				a[x] -= a[y];
				y--;
			}
			else if(a[x]==a[y])
			{
				x++;
				y--;
			}
			else if(a[x]<a[y])
			{
				a[y] -= a[x];
				x++;
			}
		}
	}
	cout << cnt;
	return 0;
}
