#include <bits/stdc++.h>
using namespace std;

struct seat {
	int n;
	char c;
};

int a1, b1;
seat a2, b2;

int main ( ) {
	freopen ( "travel.in", "r", stdin );
	freopen ( "travel.out", "w", stdout );	
	string tmp; char c;
	cin >> a1;
	cin >> c; a2.n += ( c - '0' ) * 10; cin >> c; a2.n += c - '0';
	cin >> a2.c;
//	cin >> tmp;
//	a2.n = ( char ( tmp [ 0 ] ) - '0' ) * 10 + ( char ( tmp [ 1 ] ) - '0' ); a2.c = char ( tmp [ 2 ] );
	cin >> b1;
	cin >> c; b2.n += ( c - '0' ) * 10; cin >> c; b2.n += c - '0';
	cin >> b2.c;
//	cin >> tmp;
//	b2.n = ( char ( tmp [ 0 ] ) - '0' ) * 10 + ( char ( tmp [ 1 ] ) - '0' ); b2.c = char ( tmp [ 2 ] );
//	cout << a2.n << b2.n;
	if ( a1 == b1 ) {
		cout << 1;
		if ( a2.n == b2.n ) {
			cout << 1;
			if ( a2.c - 'A' <= 2 && b2.c - 'A' <= 2 || a2.c - 'D' >= 0 && a2.c - 'D' <= 1 && b2.c - 'D' >= 0 && b2.c - 'D' <= 1 ) {
				cout << 1;
				if ( max ( a2.c - 'A', b2.c - 'A' ) - min ( a2.c - 'A', b2.c - 'A' ) == 1 ) {
					cout << 1;
				}
				else {
					cout << 0;
				}
			}
			else {
				cout << "00";
			}
		}
		else {
			cout << "000";
		}
	}
	else {
		cout << "0000";
	}
	cout << endl;
	return 0;
}
