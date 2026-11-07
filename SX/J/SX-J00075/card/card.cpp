#include <bits/stdc++.h>
//AKCSP
using namespace std;
int n, m, l[300005], lm[300005];
stack <int> a;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		if (l[x] == 0)
			a.push(x);
		else {
			while (a.top() != x) {
				a.pop();
			}
			a.push(x);
			l[x] = 0;
		}
		l[x]++;
	}
	for (int i = 1; i <= a.size(); i++) {
		lm[a.top()]++;
		a.pop();
	}
	for (int i = 1; i <= m; i++) {
		cout << lm[i] << " ";
	}
	return 0;
}
