#include <bits/stdc++.h>
using namespace std;

const int N = 200005;
string s;

int main ( ) {
	freopen ( "string.in", "r", stdin );
	freopen ( "string.out", "w", stdout );
	long long n;
	cin >> n;
	long long m;
	string c;
	for ( int i = 0; i < n; i ++ ) {
		cin >> m >> c;
		for ( int j = 0; j < m; j ++ ) {
			s += c;
		}
	}
//	cout << s << endl;
	long long cnt = 0;
	int l = 0, r = s.size ( ) - 1;
	while ( r >= l ) {
		if ( s [ l ] != s [ r ] ) {
			cnt ++;
		}
		l ++; r --;
	}
	cout << cnt << endl;
	return 0;
}
