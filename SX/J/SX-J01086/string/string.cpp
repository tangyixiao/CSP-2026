#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10;
int n, sum, res;
struct node {
	int num; char c;
}a[N];
signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i].num >> a[i].c, sum += a[i].num;
	int lstj = a[n].num, lsti = a[1].num;
	for (int i = 1, j = n; i <= n && j >= 1 && i <= j; ) {
//		cout << i << ' ' << j << ' ' << lsti << ' ' << lstj << ' ' << res << endl;
		if (a[i].c != a[j].c) res += min(lsti, lstj);
		if (lstj > lsti) lstj = lstj - lsti, i++, lsti = a[i].num;
		else if (lstj < lsti) lsti = lsti - lstj, j--, lstj = a[j].num;
		else i++, j--, lsti = a[i].num, lstj = a[j].num;
	}
	cout << res;
	return 0;
}
