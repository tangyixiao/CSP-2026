#include <bits/stdc++.h>
using namespace std;

int a, b;
string a_seat, b_seat;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	cin >> a >> a_seat >> b >> b_seat;
	
	if (a != b) {
		cout << "0000";
		return 0;
	}
	else cout << "1";
	
	int a_, b_;
	char a__, b__;
	
	a_ = (a_seat[0] - '0') * 10 + (a_seat[1] - '0');
	b_ = (b_seat[0] - '0') * 10 + (b_seat[1] - '0');
	a__ = a_seat[2];
	b__ = b_seat[2];
	if (a__ == 'F') a__ = 'E';
	if (b__ == 'F') b__ = 'E';
	
	if (a_ != b_) {
		cout << "000";
		return 0;
	}
	else cout << "1";
	
	if ((a__ <= 'C' && b__ >= 'D') || (a__ >= 'D' && b__ <= 'C')) {
		cout << "00";
		return 0;
	}
	else cout << "1";
	
	if (a__ + 1 == b__ || a__ == b__ + 1)
		cout << "1";
	else cout << "0";
	
	return 0;
}
