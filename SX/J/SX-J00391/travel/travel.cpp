#include <bits/stdc++.h>
#define ll long long
using namespace std;
string c1, s1, c2, s2;
char pai1, lie1, zuo1, pai2, lie2, zuo2;
ll x, y, cnt;

int main() {

	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;


	if (c1 == c2) {
		cout << 1;
		cnt++;
		for (int i = 0; i < s1.size(); i++) {
			pai1 = s1[i];
			lie1 = s1[i + 1];
			zuo1 = s1[i + 2];
			break;
		}
		for (int i = 0; i < s2.size(); i++) {
			pai2 = s2[i];
			lie2 = s2[i + 1];
			zuo2 = s2[i + 2];
			break;
		}
		if (pai1 == pai2 && lie1 == lie2) {
			cout << 1;
			cnt++;

			if (zuo1 <= 'C' && zuo1 >= 'A' && zuo2 <= 'C' && zuo2 >= 'A') {
				cout << 1;
				cnt++;
				x = zuo1 - '0';
				y = zuo2 - '0';
				if (abs(x - y) == 1) {
					cout << 1;
					cnt++;
				}
			} else if (zuo1 <= 'F' && zuo1 >= 'D' && zuo2 <= 'F' && zuo2 >= 'D') {
				cout << 1;
				cnt++;
				cout << 1;
				cnt++;
			}
		}

	} else {
		cout << 0;
		cout << 0;
		cout << 0;
		cout << 0;
		return 0;
	}
	if (cnt == 3) {
		cout << 0;
	} else if (cnt == 2) {
		cout << 0;
		cout << 0;
	} else if (cnt == 1) {
		cout << 0;
		cout << 0;
		cout << 0;
	}
	return 0;
}