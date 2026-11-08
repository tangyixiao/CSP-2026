#include <bits/stdc++.h>
using namespace std;
const int N = 200005;
long long a[N];
int maxn = -1;
int main()
{
	freopen("and.in","r",stdin);
	freopen("ans.out","w",stdout);
	int n,m;
	cin >> n,m;
	for (int i = 1;i <= n;i++)
	{
		cin >> a[i];
	}
	for (int i = 1;i <= n;i++)
	{
		for (int j = 1;j <= n;j++)
		{
			if (i == j)
			{
				break;
			}
			int ans = (a[i] & a[j]);
			if (ans > maxn)
			{
				maxn = ans;
			}
		}
	}
	cout << maxn;
	return 0;
}
