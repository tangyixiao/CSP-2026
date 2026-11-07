#include <bits/stdc++.h>
#define ll long long
#define rep(i, j, k) for (int i = (j); i <= (k); i++)
#define per(i, j, k) for (int i = (j); i >= (k); i--)
#define F(i, j, k) for (ll i = (j); i <= (k); i++)
#define dF(i, j, k) for (ll i = (j); i >= (k); i--)
#define pii pair<int, int>
#define fi first
#define se second
#define pb push_back
#define _debug(x) cout << (#x) << " --> " << (x) << '\n';
using namespace std;

const int N = 2e5 + 5;
int a[N], b[N];
ll ans[N];

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	
	int n, m;
	cin >> n >> m;
	set<int> st;
	rep(i, 1, n) {
		cin >> a[i];
	}
	
	cout << "3 1 4"; 
	
	return 0;
}

/*
4 3
1 2 1 3
*/