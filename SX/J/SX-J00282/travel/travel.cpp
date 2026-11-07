#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5+5;
string c1, s1, c2, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		cout << 1;
		string pai1 = s1.substr(0, 2);
		string pai2 = s2.substr(0, 2);
		if (pai1 == pai2) {
			cout << 1;
			string ce1 = s1.substr(2, 1);
			string ce2 = s2.substr(2, 1);
			if (((ce1 == "A" || ce1 == "B" || ce1 == "C") && (ce2 == "A" || ce2 == "B" || ce2 == "C")) || ((ce1 == "D"
			        || ce1 == "F")
			        && (ce2 == "D" || ce2 == "F"))) {
				cout << 1;
				string ans = ce1 + ce2;
				if (ans == "AB" || ans == "BA" || ans == "BC" || ans == "CB" || ans == "DF" || ans == "FD") {
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
		} else {
			cout << "000";
			return 0;
		}
	} else {
		cout << "0000";
		return 0;
	}
	return 0;
}
