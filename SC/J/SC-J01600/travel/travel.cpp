#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int az, bz, ah, bh;
string a, aa, b, bb;
char am, bm;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	cin >> a >> aa >> b >> bb;
	if(a[0] == '0') {
		az = int(a[1] - '0');
	}
	else {
		az = 10 + int(a[1] - '0');
	}
	if(b[0] == '0') {
		bz = int(b[1] - '0');
	}
	else {
		bz = 10 + int(b[1] - '0');
	}
	if(az == bz) {
		cout << '1';
	}
	else {
		cout << "0000";
		return 0;
	}
	if(aa[0] == '0') {
		ah = int(aa[1] - '0');
	}
	else {
		ah = 10 + int(aa[1] - '0');
	}
	if(bb[0] == '0') {
		bh = int(bb[1] - '0');
	}
	else {
		bh = 10 + int(bb[1] - '0');
	}
	am = aa[2], bm = bb[2];
	if(ah == bh) {
		cout << '1';
	}
	else {
		cout << "000";
		return 0;
	}
	if(am <= 'C' and bm <= 'C') {
		cout << '1';
	}
	else if(am >= 'D' and am <= 'F' and bm >= 'D' and bm <= 'F') {
		cout << '1';
	}
	else {
		cout << "00";
		return 0;
	}
	if(abs(am - bm) == 1 or (am == 'D' and bm == 'F') or (am == 'F' and bm == 'D')) {
		cout << '1';
	}
	else {
		cout << '0';
	}
	return 0;
}