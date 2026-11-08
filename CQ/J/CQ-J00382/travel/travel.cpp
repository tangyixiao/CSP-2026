#include <bits/stdc++.h>
using namespace std;
#define endl '\n' 
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int c_1, c_2;
	string s_1, s_2;
	cin >> c_1 >> s_1 >> c_2 >> s_2;
	
	if (c_1 != c_2) {
		cout << "0000\n";
		return 0;
	} else {
		cout << 1;
	}
	int cur_1 = (s_1[0] - '0') * 10 + s_1[1] - '0', cur_2 = (s_2[0] - '0') * 10 + s_2[1] - '0';
//	cout << cur_1 << ' ' << cur_2;
//	cout << s_1[0] - '0';
	if (cur_1 == cur_2) {
		cout << 1;
		if (s_1[2] >= 'A' && s_1[2] <= 'C' && s_2[2] >= 'A' && s_2[2] <= 'C') {
			cout << 1;
			if (abs(s_1[2] - s_2[2] )== 1) cout << 1;
			else cout << 0;
		} else if (s_1[2] >= 'D' && s_1[2] <= 'F' && s_2[2] >= 'D' && s_2[2] >= 'F') {
			cout << 1;
			if (abs(s_1[2] - s_2[2] )== 1) cout << 1;
			else cout << 0;
		} else {
			cout << "00\n";
		}
	} else {
		cout << "000\n";
	}
	return 0;
} 
