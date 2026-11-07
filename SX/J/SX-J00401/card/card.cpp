#include <bits/stdc++.h>
using namespace std;
int t[500002], cnts[300002];

bool s1[300002] = {0};

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> t[i];
	}

	for (int i = 1; i <= n; i++) {
		memset(s1, 0, sizeof(s1));
		stack<int> s;
		for (int j = i; j <= n; j++) {
			if (s1[t[j]]) {
				while (s.top() != t[j]) {
					s1[s.top()] = 0;
					s.pop();
				}
			} else {
				s.push(t[j]);
				s1[t[j]] = 1;
			}
		}
		for (int j = 1; j <= m; j++) {
			cnts[j] += s1[j];

		}
	}

	for (int i = 1; i <= m; i++) {
		cout << cnts[i] << ' ';
	}

	return 0;
}