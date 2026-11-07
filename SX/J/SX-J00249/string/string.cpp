#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define st string
ll t, n;
st s, c;

ll ch_num() {
	ll l = s.size(), ant = 0;
	for (int i = 0; i < l / 2; i++)
		if (s[i] != s[l - i - 1])
			ant++;
	return ant;
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> t;
	while (t--) {
		cin >> n >> c;
		while (n--)
			s += c;
	}
	cout << ch_num();
	return 0;
}
