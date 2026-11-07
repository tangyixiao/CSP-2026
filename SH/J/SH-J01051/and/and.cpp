#include <bits/stdc++.h>
using namespace std;
long long n,a[200005],v,f[1005][1005],maxa;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n >> v;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i];
		f[i][1] = a[i];
	}
	for (int i = 1;i <= n;i++)
	{
		for (int j = v;j >= i;j--)
		{
			f[i][j] = max(f[i][j],f[i-1][j]&a[i]);
		}
	}
	cout << f[n][v];
	fclose(stdin);
	fclose(stdout);
	return 0;
}
