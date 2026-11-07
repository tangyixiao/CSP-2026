#include <bits/stdc++.h>
#include <string>

using namespace std;

int side(char ch) {
	if (ch == 'A' || ch == 'B' || ch == 'C') return 1;
	else return 0;
}

bool near(char A, char B) {
	if (A > B) swap(A, B);
	
	if (A == 'A' && B == 'B') return true;
	if (A == 'B' && B == 'C') return true;
	if (A == 'D' && B == 'F') return true;
	
	return false;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	
	string carA, carB, seatA, seatB;
	cin >> carA >> seatA >> carB >> seatB;
	
	if (carA != carB) {
		cout << "0000" ; return 0; }
	cout << "1" ;
	
	if (seatA.substr(0, 2) != seatB.substr(0, 2)) { 
		cout << "000" ; return 0; }
	cout << "1" ;
	
	if (side(seatA.back()) != side(seatB.back())) {
		cout << "00" ; return 0; }
	cout << "1" ;
	
	if (!near(seatA.back(), seatB.back())) {
		cout << "0" ; return 0; }
	cout << "1" ;
	return 0;
}