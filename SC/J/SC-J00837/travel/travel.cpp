#include<bits/stdc++.h>
#define int long long 
#define endl "\n"
using namespace std;
signed main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios :: sync_with_stdio(0),cin.tie(0),cout.tie(0);
	string a,b,c,d;
	cin >> a >> b >> c >> d;
	string e,f,g,h;
	e += b[0];e += b[1];
	f += d[0];f += d[1];
	if(b[2] == 'A' || b[2] == 'B' || b[2] == 'C') {
		g = "left";
	}else {
		g = "right";
	}
	if(d[2] == 'A' || d[2] == 'B' || d[2] == 'C') {
		h = "left";
	}else {
		h = "right";
	}
	if(a == c) {
		cout << 1;
	}else {
		cout << "0000";
		return 0;
	}
	if(e == f) {
		cout << 1;
	}else {
		cout << "000";
		return 0;
	}
	if(g == h) {
		cout << 1;
	}else {
		cout << "00";
		return 0;
	}
	if(g == "left") {
		if(b[2] + 1 == d[2] || d[2] + 1 == b[2]) {
			cout << 1;
		}else {
			cout << 0;
		}
	}
	if(g == "right") {
		if(b[2] + 2 == d[2] || d[2] + 2 == b[2]) {
			cout << 1;
		}else {
			cout << 0;
		}
	}
	return 0;
}