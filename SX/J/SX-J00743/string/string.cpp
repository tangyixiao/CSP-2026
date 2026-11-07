#include <bits/stdc++.h>

using namespace std;
const int N = 2e5+10;
typedef long long ll;

struct A {
	ll len;
	char a;
} se[N], fe[N];
ll n;
ll ans, tot1, tot2;
ll ed, tot_sum;
ll last;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;

	for (ll i = 1, j = n; i <= n && j >= 1; i++, j--) {
		cin >> se[i].len >> se[i].a;
		tot_sum += se[i].len;
		fe[j].len = se[i].len;
		fe[j].a = se[i].a;
	}

	if (tot_sum % 2) {
		ed = tot_sum / 2 + 1;
	} else {
		ed = tot_sum / 2;
	}

//	for (int i = 1; i <= n; i++) {
//		cout << se[i].a << " " << se[i].len << " " << fe[i].a << " " << fe[i].len << endl;
//	}

	for (ll i = 0, j = 0; i <= n && j <= n;) {
		last = min(tot1, tot2);

		if (tot1 == tot2) {
			i++, j++;
			tot1 += se[i].len;
			tot2 += fe[j].len;
			//cout << "!!! " << se[i].len << " " << fe[j].len << endl;
		} else if (tot1 < tot2) {
			i++;
			tot1 += se[i].len;
		} else if (tot1 > tot2) {
			j++;
			tot2 += fe[j].len;
		}
		//cout << tot1 << " " << tot2 << " " << ed << endl;

		if (tot1 > ed) {
			tot1 = ed;
		}

		if (tot2 > ed) {
			tot2 = ed;
		}

		if (se[i].a != fe[j].a) {
			ans += min(tot1, tot2) - last;
		}

		if (tot1 == ed && tot2 == ed)
			break;
	}

	cout << ans;
	return 0;
}
