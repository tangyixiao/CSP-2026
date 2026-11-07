#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, m, nn, mm;
char cha, chb;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> n >> nn >> cha >> m >> mm >> chb;
	if (n == m) {
		cout << 1;
	} else {
		cout << 0 << 0 << 0 << 0;
		return 0;
	}
	if (nn == mm) {
		cout << 1;
	} else {
		cout << 0 << 0 << 0;
		return 0;
	}
	if ((cha >= 'A' && cha <= 'C' && chb >= 'A' && chb <= 'C') || (cha >= 'D' && cha <= 'F' && chb >= 'D' && chb <= 'F') ) {
		cout << 1;
		if ((abs(cha - chb) == 1 && (cha >= 'A' && cha <= 'C' && chb >= 'A' && chb <= 'C') ) || (cha == 'D' && chb == 'F'
		        || cha == 'F' && chb == 'D' )) {
			cout << 1;
		} else {
			cout << 0;
		}
	} else {
		cout << 0 << 0;
		return 0;
	}
	return 0;
}
