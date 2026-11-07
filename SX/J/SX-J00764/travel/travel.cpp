#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string c1, s1, c2, s2;

//100pts
bool pd(char a, char b) {
	if (a == 'A' || a == 'B' || a == 'C') {
		if (b == 'A' || b == 'B' || b == 'C') {
			return true;
		} else
			return false;
	} else {
		if (b == 'F' || b == 'D')
			return true;
		else
			return false;
	}
}

bool xl(char a, char b) {
	if (a == 'A' && b == 'B')
		return true;
	else if (a == 'B' && (b == 'A' || b == 'C'))
		return true;
	else if (a == 'C' && b == 'B')
		return true;
	else if (a == 'D' && b == 'F')
		return true;
	else if (a == 'F' && b == 'D')
		return true;
	else
		return false;
}

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2) {
		//一个车厢
		cout << 1;
	} else
		cout << 0;
	if (c1 == c2 && s1[0] == s2[0] && s1[1] == s2[1]) {
		//一个车厢且一排
		cout << 1;
	} else
		cout << 0;
	if (c1 == c2 && s1[0] == s2[0] && s1[1] == s2[1] && pd(s1[2], s2[2])) {
		//条件三
		cout << 1;
	} else
		cout << 0;
	if (c1 == c2 && s1[0] == s2[0] && s1[1] == s2[1] && pd(s1[2], s2[2]) && xl(s1[2], s2[2])) {
		cout << 1 << endl;
	} else
		cout << 0 << endl;
	return 0;
}