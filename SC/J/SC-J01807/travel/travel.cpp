#include<bits/stdc++.h>
using namespace std;
#define ll long long
string c1, s1, c2, s2;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 != c2) {
		cout << "0000";
		return 0;
	} else {
		cout << 1;
	}
	string pai_r = "";
	string pai_x = "";
	pai_r.push_back(s1[0]);
	pai_r.push_back(s1[1]);
	pai_x.push_back(s2[0]);
	pai_x.push_back(s2[1]);
	if(pai_r != pai_x) {
		cout << "000";
		return 0;
	} else {
		cout << 1;
	}
	if((s1[2] <= 'C' && s2[2] <= 'C') || (s1[2] > 'C' && s2[2] > 'C')) {
		cout << 1;
		if(s1[2]-s2[2] == 1 || s1[2]-s2[2] == -1) {
			cout << 1;
			return 0;
		} else {
			cout << 0;
			return 0;
		}
	} else {
		cout << "00";
		return 0;
	}
	return 0;
}