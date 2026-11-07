#include <bits/stdc++.h>
using namespace std;
int ans[300010];
int f[300010];
int main() {
    freopen("card.in" , "r" , stdin);
    freopen("card.out" , "w" , stdout);
	int n , m , a[500010];
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
    }
	for (int i = 0; i < n; i++) {
		stack<int> c;
		int i1 = i + 1;
		while (i1 <= n) {
			if (f[a[i1]] == 0){
				c.push(a[i1]);
				f[a[i1]] = 1;
			} else {
				while (c.top() != a[i1]) {
					f[c.top()] = 0;
					c.pop();
				}
			}
			i1++;
		}
		while (!c.empty()) {
			f[c.top()] = 0;
			++ans[c.top()];
			c.pop();
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << ans[i] << ' ';
	}
	return 0;
}