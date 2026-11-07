#include <bits/stdc++.h>
using namespace std;
map<int, bool> v[31];
vector<int> num[31], f, st;
int ans, a, m, n;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a);
		int j = 30, k = a;
		for (; k > 1; j--) {
			if (k % 2) {
				num[j].push_back(a);
				v[j][a] = 1;
			}
			k /= 2;
		}
		v[j][a] = 1;
		num[j].push_back(a);
	}
	int i = 1;
	for (; i < 30; i++) {
		if (num[i].size() >= m) {
			st = num[i];
			break;
		}
	}
	//for (auto j : st)
	//	printf("%d ", j);
	//printf("\n");
	for (int j = i + 1; j < 31 && st.size() != m; j++) {
		f.clear();
		for (auto k : st)
			if (v[j][k])
				f.push_back(k);
		if (f.size() > m)
			st = f;
	}
	ans = (1 << 30) - 1;
	for (auto j : st)
		ans &= j;
	printf("%d", ans);
}
