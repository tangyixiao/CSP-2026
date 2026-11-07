#include <bits/stdc++.h>
using namespace std;

const int N = 3 * 10e5+1;
const int M = 5 * 10e5+1;
int n, m, a;
bool t[N];
int c[M], ans[N];
stack <int> b;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)
		scanf("%d", &c[i]);

	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j++) {
			if (t[c[j]]) {
				while (b.top() != c[j]) {
					int tmp = b.top();
					t[tmp] = false;
					b.pop();
				}
			} else {
				b.push(c[j]);
				t[c[j]] = true;
			}
		}
		for (int j = 1; j <= m; j++)
			t[j] = false;
		while (!b.empty()) {
			int tmp = b.top();
			ans[tmp]++;
			b.pop();
		}
	}
	for (int i = 1; i <= m; i++) {
		printf("%d ", ans[i]);
	}
	return 0;
}
