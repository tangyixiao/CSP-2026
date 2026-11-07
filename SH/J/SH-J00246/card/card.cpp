#include <bits/stdc++.h>

using namespace std;

int n, m, a[500010], p[300010], f[300010];

void solve1() {
	for (int i = 1; i <= n; i++) {
		deque<int> q;
		for (int j = 1; j <= m; j++)
			p[j] = -1;
		for (int j = i; j <= n; j++) {
			if (p[a[j]] == -1) {
				q.push_back(a[j]);
				p[a[j]] = q.size() - 1;
			}
			else {
				for (int k = p[a[j]]; k < q.size(); k++)
					p[q.back()] = -1, q.pop_back();
				q.push_back(a[j]);
				p[a[j]] = q.size() - 1;
			}
		}
		for (int j = 1; j <= m; j++)
			if (p[j] != -1)
				++f[j];
	}
	for (int i = 1; i <= m; i++)
		cout << f[i] << " ";
}

void solve2() {
}

void solve3() {
	for (int i = 1; i <= n; i++) {
		set<int> st;
		for (int j = i; j <= n; j++)
			st.insert(a[j]);
		for (set<int>::iterator it = st.begin(); it != st.end(); it++)
			++f[*it];
	}
	for (int i = 1; i <= m; i++)
		cout << f[i] << " ";
} 

bool check() {
	for (int i = 1; i < n; i++)
		if (a[i] > a[i + 1])
			return false;
	return true;
}

void solve4() {
	for (int i = 1; i <= n; i++)
		p[a[i]] = i;
	for (int i = 1; i <= m; i++)
		cout << p[i] << " ";
}

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	if (n <= 500 && m <= 200) {
		solve1();
		return 0;
	}
	if (m <= 2) {
		solve2();
		return 0;
	}
	if (check() && n <= 5000 && m <= 3000) {
		solve3();
		return 0;
	}
	if (check() && n <= 2e5 && m <= 1e5) {
		solve4();
		return 0;
	}
	
	return 0;
}
/*
1, 2, 3, 4, 5, 6, 7, 8, 9, 20

40 pts
*/
