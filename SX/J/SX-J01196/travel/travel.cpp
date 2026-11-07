#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a == c) {
		cout << 1;
	} else {
		cout << 0;
	}
	if ("b%10" == "A" || "b%10" == "B" || "b%10" == "C") {
		if ("d%10" == "A" || "d%10" == "B" || "d%10" == "C") {
			cout << 1;
		} else if ("b%10" == "D" || "b%10" == "E" && "d%10" == "D" || "d%10" == "E") {
			cout << 1;
		} else {
			cout << 0;
		}
		if ("b/10" == "d/10") {
			cout << 1;
		} else {
			cout << 0;
		}
		if ("b%10" + 1 == "d%10" || "b%10" - 1 == "d%10") {
			cout << 1;
		} else {
			cout << 0;
		}
	}
	return 0;
}