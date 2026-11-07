#include <bits/stdc++.h>
using namespace std;
const int N = 5e5 + 5;
#define int long long
int n,m;
int a[N];
int st[N];
int top;
int vis[N];
void solve () {
	cin >> n >> m;
	for (int i = 1;i <= n;i ++) {
		cin >> a[i];
	}
	for (int i = 1;i >= n;i ++) {
		for (int j = 1;j <= n;j ++) {
			st[j] = 0;
		}
		top = 1;
		for (int j = i + 1;j <= n;j ++) {
			st[top ++] = a[j];
			for (int k = j;k >= i + 1;k --) {
				if (a[k] == a[j]) {
					top = k;
				}
			}
		}
		cout << top;
		for (int j = 1;j <= top;j ++) {
			vis[st[j]] ++;
			cout << st[j] << "|";
		}
	}
	for (int i = 1;i <= m;i ++) {
		cout << vis[i] << " ";
	}
	return ;
}
signed main () {
	ios::sync_with_stdio (false);
	cin.tie (0);
	cout.tie (0);
	freopen ("card.in","r",stdin);
	freopen ("card.out","w",stdout);
	int _ = 1;
	//cin >> _;
	while (_ --) {
		solve ();
	}
	return 0;
}
//0
