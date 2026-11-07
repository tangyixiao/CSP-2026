#include <bits/stdc++.h>
#define int long long
#define pil pair <int, int>
using namespace std;
const int N = 1e5 + 10;

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string c1, s1, c2, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	string p1 = "", p2 = "";
	char l1, l2;
	for(int i = 0; i < s1.size() - 1; i ++){
		p1 = p1 + s1[i];
	}
	l1 = s1[s1.size() - 1];
	for(int i = 0; i < s2.size() - 1; i ++){
		p2 = p2 + s2[i];
	}
	l2 = s2[s2.size() - 1];
//	cout << p1 << ' ' <<  l1 << ' ' << p2 << ' '<< l2 << '\n'; 
	bool b = false;
	if (c1 == c2) {
		cout << 1;
		b = true;
	}
	else {
		b = false;
		cout << 0;
	}
	if (b && (p1 == p2)) {
		cout << 1;
		b = true;
	}
	else {
		cout << 0;
		b = false;
	}
	if (b && (((l1 >= 'A' && l1 <= 'C') && (l2 >= 'A' && l2 <= 'C')) || ((l1 == 'D' || l1 == 'F') && (l2 == 'D' || l2 == 'F')))) {
		cout << 1;
		b = true;
	}
	else {
		cout << 0;
		b = false;
	}
	if (b) {
		if (((l1 == 'D' || l1 == 'F') && (l2 == 'D' || l2 == 'F'))) {
			cout << 1;
		}
		else if (((l1 >= 'A' && l1 <= 'C') && (l2 >= 'A' && l2 <= 'C'))) {
			if ((l1 - l2 == 1) || (l1 - l2 == -1)) {
				cout << 1;
			} 
			else {
				cout << 0;
			}
		}
	}
	else {
		cout << 0;
	}
	return 0;
}