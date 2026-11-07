#include <bits/stdc++.h>
using namespace std;
const int N = 5e5;
int n, m, a[N], res[N], ans[N];
bool mark[N];
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++)
	{
		int idx = i;
		for (int j = idx; j <= n; j++, idx++)
		{
			memset(res, 0, sizeof(res));
			memset(mark, -1, sizeof(mark));
			if (mark[a[j]] == -1) {
				mark[a[j]] = idx;
				res[idx] = a[j];
			} else {
				while (idx >= mark[a[j]])
				{
					idx --;
					mark[a[res[idx]]] = -1;
				}
			}
		}
		for (int i = 1; i <= m; i++) {
		    if (mark[i] != -1) ans[i] ++;
	    }
	}
	for (int i = 1; i <= m; i++) cout << ans[i] << ' ';
}