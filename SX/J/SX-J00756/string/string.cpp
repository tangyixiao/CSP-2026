#include <iostream>
using namespace std;

long long n, ans;

struct node {
	int l;
	string s;
} a[200005], b[200005], c[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for ( int i = 1 ; i <= n ; i++ )
		cin >> a[i].l >> a[i].s;
	for ( int i = 1 ; i <= n / 2 ; ) {
		for ( int j = n ; j >= 0 ; ) {
			if ( a[i].s == a[j].s ) {
				if ( a[i].l > a[j].l ) {
					a[i].l -= a[j].l;
					j--;
				} else if ( a[i].l < a[j].l ) {
					a[j].l -= a[i].l;
					i++;
				} else
					i++, j--;
			} else {
				if ( a[i].l > a[j].l ) {
					a[i].l -= a[j].l;
					ans += a[j].l;
					j--;
				} else if ( a[i].l < a[j].l ) {
					a[j].l -= a[i].l;
					ans += a[i].l;
					i++;
				} else
					i++, j--, ans += a[j].l;
			}
			if ( i > j ) {
				cout << ans;
				return 0;
			}
		}
	}
	cout << ans;

	return 0;
}
