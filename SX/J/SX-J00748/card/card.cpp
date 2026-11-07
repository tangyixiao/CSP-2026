#include <bits/stdc++.h>
#include <stack>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define endl "\n"
using namespace std;
const int M = 5e5+10;
int n, m, a[M];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	fast;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		cout << i << " ";
	}
	return 0;
}
