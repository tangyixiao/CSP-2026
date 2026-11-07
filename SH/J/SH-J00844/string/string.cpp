#include<iostream>
#include<algorithm> 
#include<cmath>
#include<cstdio>
using namespace std;

const int N = 2e5 + 5;
int a[N];
char c[N];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0), cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	for (int i = 1;i <= n;i++)
		cin >> a[i] >> c[i];
	int l = 0,r = n + 1;
	long long posl = 0,posr = 0,ans = 0;
	// l,r records the range id, posl,posr records the real pos of the curs
	while (l < r) {
		long long cpyl = posl,cpyr = posr;
		if (cpyl < cpyr) {
			while (posl < posr) {
				l++, posl += a[l];
				if (l >= r) {
					cout << ans << '\n';
					return 0;
				}
				if (posl < posr && c[l] != c[r]) ans += a[l];
			}
			if (c[l] != c[r]) ans += posr - (posl - a[l]);
		}
		else if (cpyl > cpyr) {
			while (posl > posr) {
				r--, posr += a[r];
				if (l >= r) {
					cout << ans << '\n';
					return 0;
				}
				if (posl > posr && c[l] != c[r]) ans += a[r];
			}
			if (c[l] != c[r]) ans += posl - (posr - a[r]);
		}
		else {
			l++, r--, posl += a[l], posr += a[r];
			if (l >= r) {
				cout << ans << endl;
				return 0;
			}
			if (c[l] != c[r]) ans += min(a[l],a[r]);
		}
	}
	cout << ans << '\n';
	return 0;
}
