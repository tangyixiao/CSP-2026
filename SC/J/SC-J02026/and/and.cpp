#include <bits/stdc++.h>
using namespace std;

int n, m, a[200005];
long long ans;
bool usf[200005];

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++) usf[i] = true;
	for (int i = 30; i >= 0; i--)
	{
		int cnt = 0;
		for (int j = 1; j <= n; j++) if((a[j] & (1 << i)) && usf[j]) cnt++;
		if(cnt < m) continue;
		for (int j = 1; j <= n; j++) if((!(a[j] & (1 << i))) && usf[j]) usf[j] = false;
		ans += (1 << i);
	}
	cout << ans;
	return 0;
}