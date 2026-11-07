#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 5e5+5;
ll n, m, a[N];
ll p[N];
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			for (int k = n; k >= j; k--) {
				if (a[k] == a[j]) {
					p[a[k]]++;
					j = k;
					break;
				}
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << p[i] << " ";
	}
	return 0;
}