#include <bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

string a, b, c, d;
map<char, int> m;

bool check1(string a, string b) {
	char c1 = a[2], c2 = b[2];
	if (c1 <= 'C' && c2 <= 'C') {
		return 1;
	} else if (c1 > 'C' && c2 > 'C') {
		return 1;
	} else {
		return 0;
	}
} 
bool check2(string a, string b) {
	return abs(m[a[2]] - m[b[2]]) == 1;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	m['A'] = 1; 
	m['B'] = 2; 
	m['C'] = 3; 
	m['D'] = 4; 
	m['F'] = 5;
	cin >> a >> b >> c >> d;
	if (a == c) {
		cout << "1";
	} else {
		cout << "0000";
		return 0;
	}
	if (b[0] == d[0] && b[1] == d[1]) {
		cout << "1";
	} else {
		cout << "000";
		return 0;
	}
	if (check1(b, d)) {
		cout << "1";
	} else {
		cout << "00";
		return 0;
	}
	if (check2(b, d)) {
		cout << "1";
	} else {
		cout << "0";
	}
	return 0; 
}
