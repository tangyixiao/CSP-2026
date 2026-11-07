#include <bits/stdc++.h>
using namespace std;
int const N = 5e5+10, M = 3e5+10;
long long a[N], v[M], d[M], tr[M];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	long long n, m, yu, cnt = 0, er, jk, gh;
	cin >> n >> m;
	stack<long long>s;
	queue<long long>q;
	stack<long long>w;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		q.push(a[i]);
	}
	cnt = n;
	er = n;
	for (int j = 1; j <= n; j++) {
		for (int i = 1; i <= er; i++) {
			yu = q.front();
			q.pop();
			s.push(yu);
			if (v[yu] == 0) {
				v[yu] = 1;
			} else {
				while (1) {
					if (s.top() != yu) {
						jk = s.top();
						w.push(jk);
						v[jk] = 0;
						s.pop();
						cnt++;
					} else {
						jk = s.top();
						w.push(jk);
						s.pop();
						s.push(yu);
						cnt++;
						break;
					}
				}
				while (!w.empty()) {
					jk = w.top();
					q.push(jk);
					w.pop();
				}
			}
		}
		er = cnt;
		cnt = 0;
		while (!s.empty()) {
			gh = s.top();
			if (tr[gh] == 0) {
				tr[gh] = 1;
				d[gh]++;
			}
			w.push(gh);
			s.pop();
		}
		while (!w.empty()) {
			gh = w.top();
			tr[gh] = 0;
			s.push(gh);
			w.pop();
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << d[i] << " ";
	}
	return 0;
}