#include <bits/stdc++.h>
#define ll long long
using namespace std;
string a, b, c, d;
ll ax, ap, bx, bp;
char az, bz;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	ax = (a[1]-'0') + (a[0]-'0')*10;
	bx = (c[1]-'0') + (c[0]-'0')*10;
	ap = (b[1]-'0') + (b[0]-'0')*10;
	bp = (d[1]-'0') + (d[0]-'0')*10;
	az = b[2]; bz = d[2];
	if (az > bz) {
		swap(ax, bx); swap(ap, bp); swap(az, bz);
	}
	if (ax == bx) {
		cout << 1;
		if (ap == bp) {
			cout << 1;
			if ((az=='A'&&bz=='B')||(az=='A'&&bz=='C')||(az=='B'&&bz=='C')
			||(az=='D'&&bz=='F')) {
   				cout << 1;
   				if ((az=='A'&&bz=='B')||(az=='B'&&bz=='C')||(az=='D'&&bz=='F')) {
   					cout << 1;
				} else {
					cout << 0;
				}	
   			} else {
   				cout << "00";
			}
		} else {
			cout << "000";
		}
	} else {
		cout << "0000";
	}
	return 0;
}
