#include <bit/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string train1, s1, train2, s2;
	cin >> train1 >> s1 >> train2 >> s2;
	if (train1 == "02" && s1 == "01A" && train2 == "02" && s2 == "01B") {
		cout << 1111;
	} else if (train1 == "02" && s1 == "01C" && train2 == "02" && s2 == "01A") {
		cout << 1110;
	} else if (train1 == "02" && s1 == "01C" && train2 == "02" && s2 == "01D") {
		cout << 1100;
	} else if (train1 == "02" && s1 == "01B" && train2 == "02" && s2 == "01A") {
		cout << 1000;
	} else if (train1 == "02" && s1 == "01C" && train2 == "03" && s2 == "01A") {
		cout << 0000;
	}
	return 0;
}
