#include <bits/stdc++.h>
using namespace std ;

struct seat {
	int num ;
	string sc ;
};

int main() {
	freopen ("travel.in", "r", stdin) ;
	freopen ("travel.out", "w", stdout) ;
	seat a, b ;
	cin >> a.num >> a.sc >> b.num >> b.sc ;
	bool b1 = false, b2 = false, b3 = false, b4 = false ;
	if ( a.num == b.num )
		b1 = true ;
	else {
		cout << b1 << b2 << b3 << b4 ;
		return 0 ;
	}
	if ( a.sc[0] == b.sc[0] && a.sc[1] == b.sc[1] )
		b2 = true ;
	else {
		cout << b1 << b2 << b3 << b4 ;
		return 0 ;
	}
	if ( a.sc[2] == 'A' || a.sc[2] == 'B' || a.sc[2] == 'C' ) {
		if ( b.sc[2] == 'A' || b.sc[2] == 'B' || b.sc[2] == 'C' ) {
			b3 = true ;
			if ( a.sc[2] == b.sc[2] + 1 || a.sc[2] == b.sc[2] - 1 ) {
				b4 = true ;
				cout << b1 << b2 << b3 << b4 ;
				return 0 ;
			}
		}
	} else if ( a.sc[2] == 'D' || a.sc[2] == 'F' ) {
		if ( b.sc[2] == 'D' || b.sc[2] == 'F' ) {
			b3 = true ;
			b4 = true ;
			cout << b1 << b2 << b3 << b4 ;
			return 0 ;
		}
	}
	return 0 ;
}