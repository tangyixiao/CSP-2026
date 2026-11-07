#include <iostream>
#include <algorithm>
using namespace std;
const int N = 200005;
int a[N][35], b[35], x[N], ans = 2147483647, c[30];
int n, m;
bool cmp(int x, int y)
{
	return x > y;
}
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	c[0] = 1;
	for(int i = 1 ; i <= 30 ; i++)
		c[i] = c[i - 1] * 2;
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++)
	{
		int t;
		cin >> t;
		for(int j = 0 ; j <= 30 ; j++)
		{
			if((t >> j) & 1)
				a[i][j] = 1;
			else a[i][j] = 0;
			b[j] += a[i][j];
		}
	}
	for(int i = 0 ; i <= 30 ; i++)
	{
		if(b[i] < m)
		{
			for(int j = 1 ; j <= n ; j++)
				a[j][i] = 0;
		}
	}
	for(int i = 1 ; i <= n ; i++)
		for(int j = 0 ; j <= 30 ; j++)
			if(a[i][j])
				x[i] += c[j];
	sort(x + 1, x + n + 1, cmp);
	for(int i = 1 ; i <= m ; i++)
		ans &= x[i];
	cout << ans << "\n";
	return 0;
}
