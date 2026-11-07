#include <bits/stdc++.h>
#define ll long long

using namespace std;
const ll N = 3e5+5;
ll n, m, a[N], t[N];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		t[a[i]]++;
	}
	t[a[n]] = n;
	for (int i = 1; i <= m; i++)
		cout << t[i] << " ";
	return 0;
}
/*
4 3
1 2 1 3




*/