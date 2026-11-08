#include <bits/stdc++.h>
using namespace std;
int a[200005];
int b[200005];
int c[200005];
int ph[45][200005];

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >> n >> m;
	for(int i=1;i<=n;i++)
	{
		int x;
		cin >> x;
		int p = 0;
		while(x != 0)
		{
			ph[p][i] = x % 2;
			p++;
			x /= 2;
		}
	}
	int p = n;
	for(int i=1;i<=p;i++)
	{
		b[i] = i;
	}
	long long ans = 0;
	for(int i=31;i>=0;i--)
	{
		int cnt = 0;
		for(int j=1;j<=p;j++)
		{
			if(ph[i][b[j]] == 1)
			{
				cnt++;
				c[cnt] = b[j];
			}
		}
		if(cnt >= m)
		{
			int cu = pow(2,i);
			ans += cu;
			p = cnt;
			for(int i=1;i<=p;i++)
			{
				b[i] = c[i];
			}
		}
	}
	cout << ans;
	return 0;
}
