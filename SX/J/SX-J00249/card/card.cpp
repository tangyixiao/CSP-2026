#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define st string
int n, m, a[1000105], s[1000105], r;
map<int, ll> t;

int check(int z) {
	for (int i = 1; i <= r; i++)
		if (s[i] == z)
			return i;
	return 0;
}

void game(int x) {
	s[1000100] = {0};
	for (int i = x; i <= n; i++) {
		if (check(a[i]))
			r =  check(a[i]) - 1;
		s[++r] = a[i];
	}
	for (int i = 1; i <= r; i++)
		t[s[i]]++;
}

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	for (int i = 1; i <= n; i++)
		game(i);
	for (int i = 1; i <= m; i++)
		cout << t[i] << " ";
	return 0;
}
