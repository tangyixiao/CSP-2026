#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string s1, s2;
	int a, b, c1, c2;
	cin >> c1 >> a >> s1 >>  c2 >> b >> s2;
	if (c1 == c2) {
		cout << "1";
	} else {
		cout << "0";
	}
	if (a == b && c1 == c2) {
		cout << "1";
	} else {
		cout << "0";
	}
	if (a == b && c1 == c2 || s1 == "A" && s1 == "B" && s1 == "C" || s2 == "A" && s2 == "B" && s2 == "C" || s1 == "D"
	        && s1 == "F" || s2 == "D" &&
	        s2 == "F") {
		cout << "1";
	} else {
		cout << "0";
	}
	if (  s1 == "A" && s2 == "B" || s1 == "B" && s2 == "A" || s1 == "B" && s2 == "C"  || s1 == "C"
	        && s2 == "B" || s1 == "D" && s2 == "F" || s1 == "F" && s2 == "D" ) {
		cout << "0";
	} else {
		cout << "1";
	}
	return 0;
}
