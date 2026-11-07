#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2e4+5;
int n, dp[N][N], num;
string s;
char c;

signed main() {
	freopen( "string.in", "r", stdin );
	freopen( "string.out", "w", stdout );

	memset( dp, 0x3f, sizeof dp );

	cin >> n;

	for ( int i = 1 ; i <= n ; i ++ ) {
		cin >> num >> c;
		for ( int j = 1 ; j <= num ; j ++ )
			s += c;
	}

	for ( int i = 1 ; i <= s.size() ; i ++ )
		dp[i][i] = 0;

	for ( int len = 2 ; len <= s.size() ; len ++ ) {
		for ( int i = 1 ; i <= s.size() - len + 1 ; i ++ ) {
			int j = i + len - 1;
			if ( s[i] == s[j] )
				dp[i][j] = dp[ i - 1 ][ j - 1 ];
			else
				for ( int k = i ; k < j ; k ++ )
					dp[i][j] = min( dp[i][j], dp[i][k] + dp[ k + 1 ][j] + 1 );
		}
	}

	cout << dp[1][n] << "\n";

	return 0;
}