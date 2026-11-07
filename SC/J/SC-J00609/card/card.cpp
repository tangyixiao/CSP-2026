#include <bits/stdc++.h>
#define ll long long
#define Suika 0
#define rep(i, j, k) for(int i=j;i<=k;i++)
#define dow(i, j, k) for(int i=j;i>=k;i--)
using namespace std;
const int N = 2e5 + 10;
int n, m, a[N];
int len[N], c[N], cnt[N], tot;
vector<int> pos[N];
int q[N], tot1, vis[N];
void solve1() {
	rep(i, 1, tot) {
		rep(j, 1, m) pos[j].clear();
		tot1 = 0;
		rep(j, i, tot) {
			if (!pos[c[j]].empty()) {
				int miao = pos[c[j]].back();
				while (tot1 > 0 && q[tot1] >= miao) {
					pos[c[q[tot1]]].pop_back();
					tot1--;
				}
			}
			q[++tot1] = j;
			pos[c[j]].push_back(j);
		}
		rep(j, 1, m) vis[j] = 0;
		rep(j, 1, tot1) {
			if (!vis[c[q[j]]]) {
				cnt[c[q[j]]] += len[i];
				vis[c[q[j]]] = 1;
			}
		}
	}
	rep(i, 1, m) {
		cout << cnt[i];
		if (i != m) cout << " ";
	}
	return ;
}
int pre1[N], pre2[N];
void solve2() {
	rep(i, 1, tot) pre1[i] = pre1[i] + (c[i] == 1);
	rep(i, 1, tot) pre2[i] = pre2[i] + (c[i] == 2);
	if (!pre2[tot]) {
		cout << n;
		return ;
	}
	cnt[c[tot]] = n;
	rep(i, 1, tot - 1) {
		if (c[i] != c[tot]) {
			cnt[c[i]] += len[i];
		}
	}
	rep(i, 1, m) {
		cout << cnt[i];
		if (i != m) cout << " ";
	}
	return ;
}
int lst[N];
void solve3() {
	rep(i, 1, n) lst[a[i]] = i;
	rep(i, 1, m) {
		cout << lst[i];
		if (i != m) cout << " ";
	}
	return ;
}
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(Suika);
	cin.tie(Suika); cout.tie(Suika);
	cin >> n >> m;
	rep(i, 1, n) cin >> a[i];
	rep(i, 1, n) {
		int j = i;
		while (j <= n && a[j] == a[i]) j++;
		len[++tot] = j - i; c[tot] = a[i];
		i = j - 1;
	}
	bool f1 = (tot <= 5000 && m <= 3000);//Baoli
	bool f2 = 1;//只有1，2
	rep(i, 1, tot) if (c[i] != 1 && c[i] != 2) f2 = 0;
	bool f3 = 1;
	rep(i, 1, tot) if (c[i] < c[i - 1]) f3 = 0;
	if (f1) {
		solve1();
		return Suika;
	}
	if (f2) {
		solve2();
		return Suika;
	}
	if (f3) {
		solve3();
		return Suika;
	}
//	solve1();
/*	dow(i, tot, 1) {
		if (!pos[c[i]].empty()) {
			int miao = pos[c[i]].back();
			while (tot1 > 0 && q[tot1] <= miao) {
				pos[c[q[tot1]]].pop_back();
				tot1--;
			}
		}
		q[++tot1] = i;
		pos[c[i]].push_back(i);
		rep(j, 1, m) vis[j] = 0;
		rep(j, 1, tot1) {
			if (!vis[c[q[j]]]) {
				cnt[c[q[j]]] += len[i];
				vis[c[q[j]]] = 1;
			}
		}
	}
//	cout << "\n";
	rep(i, 1, m) cout << cnt[i] << " ";*/
	return Suika;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/