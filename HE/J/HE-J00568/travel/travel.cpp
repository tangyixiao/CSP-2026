#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int x_c, r_c;
string x_s, r_s;

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	cin >> r_c >> r_s >> x_c >> x_s;
	if (r_c == x_c) {
		cout << 1;
	}
	else {
		cout << "0000";
		return 0;
	}
	if (r_s[0] == x_s[0] && r_s[1] == x_s[1]) {
		cout << 1;
	}
	else {
		cout << "000";
		return 0;
	}
	if ((r_s[2] <= 'C' && x_s[2] <= 'C') || ((r_s[2] <= 'F' && r_s[2] >= 'D') && (x_s[2] <= 'F' && x_s[2] >= 'D'))) {
		cout << 1;
	}
	else {
		cout << "00";
		return 0;
	}
	if (((r_s[2] <= 'C' && x_s[2] <= 'C') || (((r_s[2] <= 'F' && r_s[2] >= 'D') && (x_s[2] <= 'F' && x_s[2] >= 'D')))) && ((r_s[2] + 1 == x_s[2]) || (x_s[2] + 1 == r_s[2]))) {
		cout << 1;
	}
	else {
		cout << "0";
		return 0;
	}
	return 0;	
}
