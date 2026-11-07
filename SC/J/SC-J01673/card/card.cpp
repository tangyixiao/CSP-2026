#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 5e5 + 50;
const int M = 3e5 + 50;
int n, m;
ll a[N], cnt[M], ans[M], st[N], top;
bool flagA = 1;
int main() {
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		if (a[i - 1] > a[i]) 
			flagA = 0;
	}
	if (flagA) {
		for (int i = 1; i <= n; ++i) 
			if (a[i + 1] != a[i]) 
				cout << i << " ";
		return 0;
	}
	for (int i = 1; i <= n; ++i) {
		top = 0;
		for (int j = i; j <= n; ++j) {
			int p = 0;
			for (int k = 1; k <= top; ++k)
				if (st[k] == a[j]) {
					p = k;
					break;
				}
			if (!p)
				st[++top] = a[j];
			else
				top = p;
		}
		for (int j = 1; j <= top; ++j)
			ans[st[j]]++;
	}
	for (int i = 1; i <= m; ++i)
		cout << ans[i] << " ";
	return 0;
}