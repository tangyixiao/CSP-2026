#include <bits/stdc++.h>
using namespace std;

string c1, s1, c2, s2;

int main(int argc, char *argv[]) {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	cin >> c1 >> s1 >> c2 >> s2;
	int ans1 = 0;
	if (c1 == c2) {
		ans1 = 1;
		cout << 1;
	} else cout << 0;
	int ans2 = 0;
	vector<char> s, t;
	char cur1, cur2;
	for (int i = 0; i < 2; i ++ ) s.push_back(s1[i]), t.push_back(s2[i]);
	cur1 = s1[2], cur2 = s2[2];
	bool pd2 = true;
	for (int i = 0; i < 2; i ++ ) {
		if (s[i] != t[i]) {
			pd2 = false;
			break;
		}
	}
	
	if (pd2 && ans1) { ans2 = 1; cout << 1; }
	else cout << 0;
	int ans3 = 0;
	if (ans1 && ans2 && ((cur1 >= 'A' && cur1 <= 'C' && cur2 >= 'A' && cur2 <= 'C') || (cur1 >= 'D' && cur1 <= 'F' && cur2 >= 'D' && cur2 <= 'F'))) {
		ans3 = 1;
		cout << 1;
	} else cout << 0;
	
	if (ans1 && ans2 && ans3) {
		int int1 = cur1 - 'A', int2 = cur2 - 'A';
		if (int1 < int2) swap(int1, int2);
		if (int1 - int2 == 1) {
			cout << 1;
		} else cout << 0;
	} else cout << 0;
	
	return 0;
}
