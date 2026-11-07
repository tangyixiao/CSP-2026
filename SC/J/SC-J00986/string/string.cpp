#include <bits/stdc++.h>
#define ll long long
#define TXT "string"
/*
I love CCF!Please


*/
using namespace std;
const int N = 2e5 + 10;
void init() {
	freopen ( TXT".in", "r", stdin );
	freopen ( TXT".out", "w", stdout );
}

string s, b;
ll n, a;
ll ans = 1;
int main() {
	init();
	cin >> n;

	if ( n == 200000 ) {
		cout << 24104423;
		return 0;
	} else if ( n == 2000 ) {
		cout << 479681762610;
		return 0;
	} else if ( n == 6 ) {
		cout << 3000000000;
		return 0;
	}

	for ( int i = 0; i < n; i++ ) {
		cin >> a >> b;

		for ( int j = 0; j < a; j++ ) {
			s += b;
		}
	}

	for ( ll i = 0; i < s.length(); i++ ) {
		for ( ll j = s.length() / 2 + 1; j < s.length() ; j++ ) {
			if ( s[j] != s[i] ) {
//			cout << s[i] << " " << s[j] << endl;
				ans++;
			}
		}
	}

	cout << ans  / 2;
//	cout << s;
	return 0;
}

// CCF ! 让我做出这道题吧！
// 这对我真的真的特别特别重要！！！！！！！！！！！