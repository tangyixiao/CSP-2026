#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<char> a;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	ll cnt = 0;
	for (int i = 1; i <= n; i++) {
		int aa;
		cin >> aa;
		char cc;
		cin >> cc;
		cnt += aa;
		while (aa--)
			a.push_back(cc);
	}
	ll ans = 0;
	ll cntt = cnt;
	cnt /= 2;
	for (int i = 0; i < cnt; i++) {
		if (a[i] != a[cntt - i - 1])
			ans++;
	}
	cout << ans << endl;
	return 0;
}