#include <bits/stdc++.h>
#define int long long
using namespace std;

string s1, c1, s2, c2;

signed main() {
	freopen( "travel.in", "r", stdin );
	freopen( "travel.out", "w", stdout );

	cin >> c1 >> s1 >> c2 >> s2;

	if ( c1 == c2 )
		cout << 1;
	else
		cout << 0;

	string s3 = s1.substr( 0, 2 ), s4 = s2.substr( 0, 2 );

	if ( s3 == s4 && c1 == c2 )
		cout << 1;
	else
		cout << 0;

	if (( s1[2] >= 'D' && s1[2] <= 'F' && s2[2] >= 'D' && s2[2] <= 'F' ) || ( s1[2] >= 'A' && s1[2] <= 'C' && s2[2] >= 'A'
	        && s2[2] <= 'C' ) && s3 == s4 && c1 == c2)
		cout << 1;
	else
		cout << 0;

	if (( s1[2] + 1 == s2[2] || s2[2] + 1 == s1[2] ) && (( s1[2] != 'C' && s2[2] != 'D' ) && ( s1[2] != 'D'
	        && s2[2] != 'C' ) ) && s3 == s4 && c1 == c2 )
		cout << 1;
	else
		cout << 0;

	return 0;
}