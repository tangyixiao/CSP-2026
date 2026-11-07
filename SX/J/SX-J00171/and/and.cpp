#include <bits\stdc++.h>
using namespace std;
#define ll long long
ll n, m, a[200005], s;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++) {
		for (int j = i ; j + 2 <= m; j++) {
			s = max((a[i] & a[j]), (a[i] & a[j + 1]));
//			cout << (a[i] & a[j+1]) << " " << (a[i] & a[j + 2]) << '\n';
//			cout << i << " "  << '\n';
		}
	}
	cout << s;


	return 0;
}
