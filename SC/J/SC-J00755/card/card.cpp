#include <bits/stdc++.h>
using namespace std;
const int N = 505;
int ans[N];
int in[N];
int x[N * N], tot;
int n, m, a[N];
int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    	cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
    	for (int j = i; j <= n; j++)
    	{
    		if (in[a[j]])
                tot = in[a[j]] - 1;
			else
			{
			    tot++;
			    x[tot] = a[j];
				in[a[j]] = tot;
			}
		}
		for (int i = 1; i <= tot; i++)
            ans[x[i]]++;
	}
	for (int i = 1; i <= m; i++)
		cout << ans[i] << ' ';
    return 0;
}
