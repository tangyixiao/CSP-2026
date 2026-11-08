#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n, m, maxn = 0, num[20000];
	cin >> n >> m;
	for(int i = 1; i <= n; i ++)
	{
		cin >> num[i];
		maxn = max(maxn, num[i]);
	}
	cout << maxn << endl;
	return 0;
}
