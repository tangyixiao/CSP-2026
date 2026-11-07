#include <bits/stdc++.h>
using namespace std;

long long li;
long long ma[200050], mb[200050];
int l, r;
char ll;
long long l1, l2;
bool f;
long long ans;

void j(long long a1, long long a2, int b1, int b2) {
	if (a1 > a2) {
		if (b1 != b2) {
			ans += a2;
		}
		l1 = a1 - a2;
		l2 = b1;
		f = false;
	} else if (a1 < a2) {
		if (b1 != b2) {
			ans += a1;
		}
		l1 = a2 - a1;
		l2 = b2;
		f = true;
	} else {
		if (b1 != b2) {
			ans += a1;
		}
		l1 = 0;
		l2 = 0;
		f = false;
	}
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> li;
	r = li;
	l = 1;
	for (int i = 1; i <= li; i++) {
		cin >> ma[i] >> ll;
		mb[i] = ll;
	}
	while (r >= l) {
		if (l1 == 0 && l2 == 0) {
			j(ma[l], ma[r], mb[l], mb[r]);
			l++;
			r--;
		} else if (f = false) {
			j(l1, ma[r], l2, mb[r]);
			r--;
		} else {
			j(l1, ma[l], l2, mb[l]);
			l++;
		}
	}
	cout << ans << endl;
	return 0;
}
