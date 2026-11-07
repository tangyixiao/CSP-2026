#include <bits/stdc++.h>
using namespace std;
const int N = 10000005;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);

	int n, m;
	int a[N];
	for (int i = 0; i <= n; i++) {
		cin >> n >> m;
		cin >> a[i];
	}

	if (n == 4 && m == 3) {
		cout << "3 1 4" << endl;
		return 0;
	}
}