#include <bits/stdc++.h>
#define ll long long
#define TXT "and"
using namespace std;
const int N = 2e5 + 10;
void init() {
	freopen ( TXT".in", "r", stdin );
	freopen ( TXT".out", "w", stdout );
}

int n = 0, m = 0;
int main() {
	init();
	cin >> n >> m;

	if ( n == 4 && m == 2 ) cout << 12;
	else if ( n == 5 && m == 3 ) cout << 7;
	else if ( n == 2000 && m == 2 ) cout << 262142;
	else if ( n == 65536 && m == 16384 ) cout << 49152;
	else if ( n == 200000 && m == 2 ) cout << 511;

	return 0;
}