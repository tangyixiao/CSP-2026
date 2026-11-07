#include <bits/stdc++.h>
using namespace std;
//AKCSP2026
string anum, a, bnum, b;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> anum >> a >> bnum >> b;
	cout << (anum == bnum ? 1 : 0);
	cout << (anum == bnum&&a[0] == b[0] && a[1] == b[1] ? 1 : 0);
	cout << (anum == bnum&&a[0] == b[0] && a[1] == b[1] &&
	         ((a[2] == 'A' || a[2] == 'B' || a[2] == 'C') &&
	          (b[2] == 'A' || b[2] == 'B' || b[2] == 'C')
	          ||
	          (a[2] == 'D' || a[2] == 'F' && (a[2] == 'D' || a[2] == 'F'))
	         ) ? 1 : 0);
	cout << (anum == bnum&&a[0] == b[0] && a[1] == b[1] &&
	         (a[2] == 'A' && b[2] == 'B' || a[2] == 'B' && b[2] == 'A'
	          || a[2] == 'B' && b[2] == 'C' || a[2] == 'C' && b[2] == 'B'
	          || a[2] == 'F' && b[2] == 'D' || a[2] == 'D' && b[2] == 'F'
	         ) ? 1 : 0);
	return 0;
}
