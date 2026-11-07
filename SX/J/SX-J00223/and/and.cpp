#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2e5+5;
int n, m;

struct Node {
	int x, num1;
} a[N];

bool cmp( Node x, Node y ) {
	return x.num1 > y.num1;
}

signed main() {
	freopen( "and.in", "r", stdin );
	freopen( "and.out", "w", stdout );

	cin >> n >> m;

	for ( int i = 1 ; i <= n ; i ++ ) {
		cin >> a[i].x;
		a[i].num1 = ( int )( log2(a[i].x) );
	}

	stable_sort( a + 1, a + n + 1, cmp );

	cout << a[m].x;

	return 0;
}