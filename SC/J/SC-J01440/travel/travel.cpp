#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	
	if (c1 == c2) {
		cout << 1;
	} else {
		cout << "0000";
		return 0;
	}
	
	vector<char > s3, s4;
	
	for (ll i = 0; i < s1.size() - 1; ++i) {
		s3.push_back(s1[i]);
		s4.push_back(s2[i]);
	}
	
	if (s3 == s4) {
		cout << 1;
	} else {
		cout << "000";
		return 0;
	}
	
	char sc1 = s1[s1.size() - 1];
	char sc2 = s2[s2.size() - 1];
	
	if (sc1 >= 'A' && sc1 <= 'C' && sc2 >= 'A' && sc2 <= 'C') {
		cout << 1;
	} else if (sc1 >= 'E' && sc1 <= 'F' && sc2 >= 'E' && sc2 <= 'F') {
		cout << 1;
	} else {
		cout << "00";
		return 0;
	}
	
	if (abs(sc1 - sc2) == 1) {
		cout << 1;
	} else {
		cout << 0;
	}
	
	cout << '\n';
	
	return 0;
}