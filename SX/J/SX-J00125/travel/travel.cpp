#include <iostream>
#include <string>
using namespace std;
int a1, a2;
string s1, s2;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a1 >> s1 >> a2 >> s2;
	if (a1 != a2) {
		cout << "0000";
	} else if (s1.substr(0, 2) != s2.substr(0, 2))
		cout << 1000;
	else {
		string a = s1.substr(2, 2);
		string b = s2.substr(2, 2);
		if ((a == "A" || a == "B" || a == "C") && (b == "A" || b == "B" || b == "C")) {
			if (a > b)
				swap(a, b);
			if ((a == "A" && b == "B") || (a == "B" && b == "C"))
				cout << 1111;
			else
				cout << 1110;
		} else if ((a == "D" || a == "F") && (b == "D" || b == "F"))
			cout << 1111;
		else
			cout << 1100;
	}
	return 0;
}