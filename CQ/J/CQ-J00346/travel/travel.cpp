#include<bits/stdc++.h>
using namespace std;
#define ll long long
string c_1, s_1, c_2, s_2;
ll id[505];
bool check(char a, char b) {
	if (id[a] != id[b]) return false;
	return true;
}

bool check_final(char a, char b) {
	if (abs(a - b) != 1) return false;
	if (id[a] != id[b]) return false;
	return true;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c_1 >> s_1 >> c_2 >> s_2;
	id['A'] = 1;
	id['B'] = 1;
	id['C'] = 1;
	id['D'] = 2;
	id['E'] = 2;
	if (c_1 == c_2) {
		cout << 1;
	} else {
		cout << "0000";
		return 0;
	}
	if (s_1[0] == s_2[0] && s_1[1] == s_2[1]) {
		cout << 1;
	} else {
		cout << "000";
		return 0;
	}
	if (check(s_1[2], s_2[2])) {
		cout << 1;
	} else {
		cout << "00";
		return 0;
	}
	if (check_final(s_1[2], s_2[2])) {
		cout << 1;
	} else {
		cout << "0";
		return 0;
	}
	return 0;
} 
