#include<bits/stdc++.h>
using namespace std ;
char a[4][2] = {{'A' , 'B'} , {'A' , 'C'} , {'B' , 'C'} , {'D' , 'F'} } ;
int main() {
	freopen("travel.in" , "r" , stdin) ;
	freopen("travel.out" , "w" , stdout) ;
	ios::sync_with_stdio(false) ;
	cin.tie(nullptr) ;
	cout.tie(nullptr) ;
	string ac , bc , as , bs ;
	cin >> ac >> as >> bc >> bs ;
	if(ac == bc) {
		cout << "1" ;
	}else {
		cout << "0000" ;
		return 0 ;
	}
	for(int i = 0 ; i < 2 ; i ++) {
		if(as[i] != bs[i]) {
			cout << "000" ;
			return 0 ;
		}
	}
	cout << "1" ;
	char cs = as[2] , ccs = bs[2] ;
	if(cs > ccs) {
		cs = bs[2] ;
		ccs = as[2] ;
	}
	bool f = false ;
	int idx = -1 ;
	for(int i = 0 ; i < 4 ; i ++) {
		if(cs == a[i][0] && ccs == a[i][1]) {
			cout << "1" ;
			idx = i ;
			f = true ;
		}
	}
	if(!f) {
		cout << "00" ;
		return 0 ;
	}
	if(idx != 1) {
		cout << "1" ;
	}else {
		cout << "0" ;
		return 0 ;
	}
	return 0 ;
}

