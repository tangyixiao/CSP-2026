#include <bits/stdc++.h>
using namespace std;
long long n, m;
long long a[500005];
bool check[300005];
vector<long long> b;

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; i++) {
			if (check[a[j]] == 0) {
				check[a[j]] = 1;
				b.push_back(a[j]);
			} else {
				while (b.top() != a[j])
					b.pop();
			}
		}
	}
	return 0;
}
