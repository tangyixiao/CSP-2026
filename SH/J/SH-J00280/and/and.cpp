#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int n, m, a[200005], b[200005];
int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	int ans = 0;
	for(int k = 29; k >= 0; k--)
	{
		int cnt = 0;
		for(int i = 1; i <= n; i++) if(a[i]&(1<<k)) b[++cnt] = a[i];
		if(cnt >= m)
		{
			ans |= (1<<k), n = cnt;
			memcpy(a, b, sizeof a); 
		}
	}
	cout << ans;
}
