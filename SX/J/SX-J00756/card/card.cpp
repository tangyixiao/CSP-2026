#include <iostream>
using namespace std;

int n, m;
int a[500005];
int b[300005];

int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for ( int i = 1 ; i <= n ; i++ ) {
		cin >> a[i];
	}
	for ( int i = 1 ; i <= n ; i++ ) {
		string s;
		for ( int j = i ; j <= n ; j++ ) {
			if ( s.find(char(a[j] + '0')) != -1 ) {
				s.erase(s.find(char(a[j] + '0')));
			}
			s += char(a[j] + '0');
		}
		for ( int j = 0 ; j < s.size() ; j++ )
			b[int(s[j] - '0')]++;
	}
	for ( int i = 1 ; i <= m ; i++ )
		cout << b[i] << ' ';

	return 0;
}
