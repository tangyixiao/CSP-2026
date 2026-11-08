#include <bits/stdc++.h>
using namespace std;

constexpr int N = 2e5 + 10;

typedef long long ll;

int n;
ll a[N];
char ch[N];
string str;

void task1(int m) {
	int mid;
	if (m & 1) mid = (m - 1) >> 1;
	else mid = m >> 1; 
	int ans = 0;
	for (int i = 1; i <= mid; i ++ ) {
		if (str[i] != str[i + mid - 1]) ans ++ ;
	}
	
	cout << ans << "\n";
}

int main(int argc, char *argv[]) {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	cin >> n;
	ll maxa = -1LL;
	for (int i = 1; i <= n; i ++ ) {
		cin >> a[i] >> ch[i]; maxa = max(maxa, a[i]);
		for (ll j = 1; j <= a[i]; j ++ ) str.push_back(ch[i]);
	}
	
	ll m = str.length(); str = ' ' + str;
	int ans = 0;
	task1(m);
	return 0;
}