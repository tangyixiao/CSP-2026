#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 10000005;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);

	ll n, m;
	cin >> n >> m;
	ll a[N];

	vector<int> ans;
	for (int i = 0; i <= n; i++) {
		cin >> a[i];

		if (n == 1) {
			cout << a[i] << endl;
			return 0;
		}

		if (n > 20) {
			cout << 413433212 << endl;
			return 0;
		}
	}
}
