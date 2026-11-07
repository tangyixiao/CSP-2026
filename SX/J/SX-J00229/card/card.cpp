#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 5e5+5;
int a[N], b[N];
map<int, ll> tong;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++) {
		int pos = 1;
		memset(b, 0, sizeof(b));
		for (int j = i; j <= n; j++) {
			int l = lower_bound(b + 1, b + pos, a[j]) - b;
			if (b[l] == a[j])
				pos = l + 1;
			else
				b[pos++] = a[j];
		}
		for (int j = 1; j < pos; j++)
			tong[b[j]]++;

	}
	for (int i = 1; i <= m; i++)
		cout << tong[i] << " ";
	return 0;
}
