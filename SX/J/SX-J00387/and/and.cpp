#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll a, b, mmax, k;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		cin >> k;
		mmax = max(mmax, k);
	}
	cout << mmax;
}
