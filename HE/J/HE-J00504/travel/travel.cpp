#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

struct Node {
	string id, seat;
};

int getId(char a) {
	if (a >= 'A' && a <= 'C') return 1;
	return 0;
}

bool check(char a, char b) {
	return getId(a) == getId(b) && abs(a - b) == 1;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	Node x, r;
	cin >> x.id >> x.seat >> r.id >> r.seat;
	
	if (x.id == r.id) cout << 1;
	else cout << 0;
	
	string xcol = x.seat.substr(0, 2), rcol = r.seat.substr(0, 2);
	char xseatid = x.seat[2], rseatid = r.seat[2];
	
	if (x.id == r.id && xcol == rcol) cout << 1;
	else cout << 0;
	
	if (x.id == r.id && xcol == rcol && getId(xseatid) == getId(rseatid)) cout << 1;
	else cout << 0;
	
	if (x.id == r.id && xcol == rcol && getId(xseatid) == getId(rseatid) && check(xseatid, rseatid)) cout << 1;
	else cout << 0;
	
	return 0;
}
