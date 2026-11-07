#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, a, sum, tot, tot1, t;
bool f;
char b;

struct st {
	int num;
	char c;
};
st s[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> b;
		tot += a;
		if (s[i - 1].c == b) {
			a += s[i - 1].num;
			s[i - 1].c = '0';
		}
		s[i].num = a;
		s[i].c = b;
	}
	if (tot % 2 == 0) {
		tot1 = tot / 2;
		f = 1;
	} else
		tot1 = (tot + 1) / 2;
	for (int i = 1; i <= n; i++) {
		if (s[i].c == '0')
			continue;
		t = t + s[i].num;
		if (t >= tot1) {
			if (f == 1) {
				ll k = s[i].num - (t - tot1), l = i;
				for (ll j = s[i].num - (t - tot1) + 1; j <= tot; j++) {
					if (j > s[i].num) {
						tot -= s[i].num;
						j -= s[i].num;
						i++;
					}
					if (k < 1) {
						k += s[l - 1].num;
						l--;
					}
					if (s[i].c != s[l].c)
						sum++;
					k--;
				}
			} else {
				ll k = s[i].num - (t - tot1), l = i;
				for (ll j = s[i].num - (t - tot1) ; j <= tot; j++) {
					if (j > s[i].num) {
						tot -= s[i].num;
						j -= s[i].num;
						i++;
					}
					if (k < 1) {
						k += s[l - 1].num;
						l--;
					}
					if (s[i].c != s[l].c)
						sum++;
					k--;
				}
			}
			break;
		}
	}
	cout << sum;
	return 0;
}