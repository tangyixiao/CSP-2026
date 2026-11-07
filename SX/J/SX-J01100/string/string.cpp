#include <bits/stdc++.h>
using namespace std ;

struct str {
	long long num ;
	char ch ;
} s[10005];

int main() {
	freopen ("string.in", "r", stdin) ;
	freopen ("string.out", "w", stdout) ;
	int n ;
	cin >> n ;
	int number1 = 0, number2 = 0 ;
	for ( int i = 1 ; i <= n ; i++ ) {
		cin >> s[i].num >> s[i].ch ;
		if ( i > 1 ) {
			if ( s[i].ch != s[i - 1].ch ) {
				number1++ ;
				number2 += s[i].num ;
			}
		}
	}
	cout << number2 ;
	return 0 ;
}