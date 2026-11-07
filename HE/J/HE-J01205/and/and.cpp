#include <iostream>
#include <algorithm>
#define int long long
using namespace std;
const int MAXN = 2e6 + 5;
int n, m;
int a[MAXN];
signed main(void)
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for(int i = 1;i <= n;i++) cin >> a[i];
	sort(a + 1, a + n + 1, greater<int>());
	int ans = a[1];
	for(int i = 2;i <= m;i++) ans &= a[i];
	cout << ans << endl;
	return 0;
}
