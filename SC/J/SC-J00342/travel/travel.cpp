#include<bits/stdc++.h>
#define int long long
using namespace std;

int c_one, c_two;
string s_one, s_two;

signed main () {
	ios::sync_with_stdio(0);
	cin.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	cin >> c_one >> s_one >> c_two >> s_two;
	
	if (c_one == c_two) {
		cout << 1;
	} else {
		cout << "0000";
		return 0;
	}
	
	if (s_one[0] == s_two[0] && s_one[1] == s_two[1]) {
		cout << 1;
	} else {
		cout << "000";
		return 0;
	}
	
	if (s_one[2] >= 'D'&&s_two[2] >= 'D' || s_one[2] <= 'C'&&s_two[2] <= 'C') {
		cout << 1;
	} else {
		cout << "00";
		return 0;
	}
	
	if (s_one[2] - s_two[2] == 1 || s_one[2] - s_two[2] == -1){
		cout << 1;
	} else {
		cout << 0;
	}
	
	return 0;
}