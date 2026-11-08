#include <bits/stdc++.h>
using namespace std;
const int maxn = 5e5 + 5;
int n, m, a[maxn], l[maxn], r[maxn], vis[maxn], tt, bb[maxn];
map<int, int> mp;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
//	scanf("%d%d", &n, &m);
	vector<int> idx[n + 5];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		bb[i] = a[i];
//		scanf("%d", &a[i]);
		idx[a[i]].push_back(i);
	}
	sort(bb + 1, bb + 1 + n);
	int ff = 0;
	for (int i = 1; i <= n; i++) {
		if (a[i] != bb[i]) {
			ff = 1;
			break;
		}
	}
	if (!ff) {
		map<int, int> mpp;
		for (int i = 1; i <= n; i++) {
			mpp[a[i]] = i;
		}
		for (int i = 1; i <= m; i++) {
			cout << mpp[i] << ' ';
		}
	}
	else {
		tt = a[n];
		for (int i = 1; i <= n; i++) {
			l[i] = i;
			for (int j : idx[a[i]]) {
				if (j > i) {
					r[i] = j;
					break;
				}
			}
			if (r[i] == 0) r[i] = i;
	//		cout << l[i] << ' ' << r[i] << '\n';
		}
		for (int i = 1; i <= n; i++) {
			int j = i;
			vector<int> c;
			while (j < n) {
				if (j == r[j]) {
					c.push_back(a[j]);
					j++;
				}
				j = r[j];
			}
	//		cout << j << '\n';
	//		for (int k : c) cout << k << ' ';
	//		cout << '\n';
			for (int k : c) mp[k]++;
		}
		for (int i = 1; i <= m; i++) {
			if (i == tt) {
				cout << n << ' ';
	//			printf("%d ", n);
			}
			else {
				cout << mp[i] << ' ';
	//			printf("%d ", mp[i]);
			}
		}
	}
	
	
	return 0;
}

/*
10 3
3 1 2 1 3 2 3 1 2 1
*/
