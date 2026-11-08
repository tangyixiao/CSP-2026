#include<bits/stdc++.h>
using namespace std;
long long a,b,c,d;
bool r,s,t;
char n,m;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> a >> b >> n >> c >> d >> m;
	if(a == c) {
		cout << 1;
		r = 1;
	} else {
		cout << 0;
	}
	if(r == 1 && b == d) {
		cout << 1;
		s = 1;
	} else {
		cout << 0;
	}
	bool p;
	if(n > m) {
		if(n == 'A') {
			if(m == 'B') p = 1;
			if(m == 'C') p = 1;
		}
		if(n == 'B') {
			if(m == 'C') p = 1;
		}
		if(n == 'F') {
			if(m == 'D') p = 1;
		}
	} else {
		if(m == 'A') {
			if(n == 'B') p = 1;
			if(n == 'C') p = 1;
		}
		if(m == 'B') {
			if(n == 'C') p = 1;
		}
		if(m == 'F') {
			if(n == 'D') p = 1;
		}
	}
	if(s == 1 && p == 1) {
		cout << 1;
		t = 1;
	} else {
		cout << 0;
	}
	bool q = 0;
	if(n == 'A' && m == 'C' || m == 'A' && n == 'C') q = 1;
	if(t == 1 && q == 0) {
		cout << 1;
	} else {
		cout << 0;
	}
	return 0;
}
