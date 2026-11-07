#include <bits/stdc++.h>
using namespace std;
long long n, m, t[100005], x[500005], l = 1, r = 1;


struct T {
	int id, z;
} a[500005];

int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].z;
		if (t[a[i].z] == 0) {
			x[++r] = a[i].z;
			t[a[i].z]++;
		} else {
			l = r;
			memset( t, 0, sizeof(t));
			x[++r] = a[i].z;
			t[a[i].z]++;
		}
		for (int j = 1; j <= m; j++) {
			if (t[j] == 1) {
				a[j].id++;
			}
		}
	}
	for (int i = 1; i <= m; i++) {
		cout << a[j].id << ' ';
	}
	return 0;
}