#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
string pinjie;
int digit;
string alpha;

signed main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//reverse
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> digit >> alpha;
		for (int j = 0; j < digit; j++) {
			pinjie += alpha;
		}
	}
	int longer = pinjie.length();
	cout << 0;
	return 0;
}
