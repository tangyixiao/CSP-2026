#include<bits/stdc++.h>

using namespace std ;

string c1 , s1 , c2 , s2 ;

inline bool check1(char x , char y) {
	if(x == 'A' || x == 'B' || x == 'C') return (y == 'A' ||y == 'B' || y == 'C') ;
	if(x == 'D' || x == 'F') return (y == 'D' || y == 'F') ;
}
inline bool check2(char x , char y) {
	if(x == 'A') return (y == 'B') ;
	if(x == 'B') return (y == 'A' || y == 'C') ;
	if(x == 'C') return (y == 'B') ;
	if(x == 'D') return (y == 'F') ;
	if(x == 'F') return (y == 'D') ;
}

int main() {
	freopen("travel.in" , "r" , stdin) ;
	freopen("travel.out" , "w" , stdout) ;
	ios::sync_with_stdio(0) ;
	cin.tie(0) , cout.tie(0) ;
	cin >> c1 >> s1 >> c2 >> s2 ;
	if(c1 == c2) {
		cout << 1 ;
		if(s1[0] == s2[0] && s1[1] == s2[1]) {
			cout << 1 ;
			if(check1(s1[2] , s2[2])) {
				cout << 1 ;
				if(check2(s1[2] , s2[2])) cout << 1 ;
				else cout << 0 ;
			}
			else cout << "00" ;
		}
		else cout << "000" ;
	}
	else cout << "0000" ;
	return 0 ;
}