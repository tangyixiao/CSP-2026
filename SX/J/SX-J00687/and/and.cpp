#include <bits/stdc++.h>
using namespace std;
long long a[200005];

struct node {
	string s;
	int id;
};

bool cmp(node k, node b) {
	int lenk = k.s.size(), lenb = b.s.size();
//	return lenk > lenb || (lenk == lenb&&k.s > b.s);
	return k.s > b.s;
}
int n, m;
node v[200005];
//int cnt[31];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		string s;
		v[i].id = i;
		int j = a[i];
//		int now = 1;
		while (j != 0) {
//			if (j & 1)
//				cnt[now]++;
			s = to_string(j & 1) + s;
			j >>= 1;
//			now++;
		}
		if (a[i] == 0)
			v[i].s = "0";
		else
			v[i].s = s;
	}
//	for (int i = 1; i <= n; i++) {
//
//		for (int j = v[i].s.size() - 1; j >= 0; j--) {
//			if (cnt[j + 1] < 2 || v[i].s[j] == '0')
//				v[i].s.erase(j, 1);
//			else
//				break;
//		}
//	}
	sort(v + 1, v + n + 1, cmp);
	long long ans = a[v[1].id];
	for (int i = 2; i <= m; i++) {
		ans = (ans &a[v[i].id]);
	}
	cout << ans;
	return 0;
}
