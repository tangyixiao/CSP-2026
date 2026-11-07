#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string Rc, Rz, Xc, XZ;
	cin >> Rc >> Rz >> Xc >> XZ;
	if (Rc != Xc) {
		cout << "0000";
		return 0;
	}
	if (Rc == Xc) {
		cout << "1111";


	}

	return 0;
}
