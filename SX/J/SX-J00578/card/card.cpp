#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 5e5 + 10;
int n, m;
int a[N], cnt[N];
vector<int> d;

struct node {
	int pos;
	int num;
};
node f[N];

signed main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i ++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i ++) {
		d.clear();
		for (int j = 1; j <= n; j ++) {
			f[a[j]].num = 0;
		}
		for (int j = i; j <= n; j ++) {
			if (f[a[j]].num == 1) {
				for (int k = f[a[j]].pos - 1; k < j - 1; k ++) {
					d.pop_back();
				}
			}
			f[a[j]].num = 1;
			d.push_back(a[j]);
			f[a[j]].pos = j;
		}
		for (int j = 0; j < d.size(); j ++) {
			cnt[d[j]] ++;
		}
	}
	for (int i = 1; i <= m; i ++) {
		cout << cnt[i] << ' ';
	}
	cout << endl;
	return 0;
}
