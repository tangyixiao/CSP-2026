#include <bits/stdc++.h>
using namespace std;
long long n, m;

int main() {
//	freopen("card.in", "r", stdin);
	//freopen("card.out", "w", stdout);
	scanf("%lld %lld", &n, &m);
	long long a[n + 2] = {}, b[m + 1] = {0};
	stack<int> s;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int k = 1; k <= n; k++) {
		s.push(a[k]);
		for (int i = 1 + k; i <= n; i++) {
			s.push(a[i]);
			int c = 0;
			for (int j = 1; j < i; j++) {
				if (a[j] == a[i] && c == 0) {
					c = 1;
					s.pop();
				} else if (c)
					s.pop();
			}
			s.push(a[i]);
		}
		while (1) {
			if (s.empty())
				break;
			else {
				b[s.top()]++;
				s.pop();
			}
		}

	}
	for (int i = 1; i <= m; i++)
		cout << b[i] << " ";
	return 0;
}