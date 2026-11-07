#include <bits/stdc++.h>
using namespace std;
int n, m;
int q[300005];
string w;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		char y;
		cin >> y;
		w += y;
	}
	for (int qwrfd = 1; qwrfd <= n; qwrfd++) {
		string a = "";
		for (int i = qwrfd - 1; i <= n; i++) {
			a += w[i];
			if (a.find(w[i]) != a.rfind(w[i])) {
				for (int j = a.find(w[i]) + 1; j <= a.rfind(w[i]); j++) {
					a[j] = 'A';
				}
			}
		}
		for (int i = 0; i <= a.size(); i++) {
			if (a[i] <= '9' && a[i] >= '0') {
				q[int(a[i] - '0')]++;
			}
		}
		//cout << a << endl;
	}
	for (int i = 1; i <= m; i++) {
		cout << q[i] << " ";
	}
	return 0;
}