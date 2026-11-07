#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct A {
	ll sl;
	char zm;
} a[200100];
ll n;
ll cnt;

int main() {

	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);

	for (int i = 1; i <= n; i++) {
		cin >> n;
		cin >> a[i].sl;
		cin >> a[i].zm;
	}
	for (int i = 1; i <= n; i++) {
		cnt += a[i].sl;
	}
	if (n == 0) {
		cout << 0;
	} else if (n == 2) {
		if (a[1].zm == a[2].zm) {
			cout << 0;
		}
	}
	return 0;
}