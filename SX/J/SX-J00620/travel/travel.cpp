#include <bits/stdc++.h>
using namespace std;
string e[4];
int main(
    freopen("travel.in", "r", stdin);
    freopen("travel.out", "w", stdout);
    string a, b[3], c, d[3];
    cin >> a;

for (int i = 0; i <= 2; i++) {
cin >> b[i];
}
cin >> c;

for (int i = 0; i <= 2; i++) {
cin >> d[i];
}

if (a == c) {
e[0] = "1";
	if (b[0] == d[0]) {
		if (b[1] == d[1]) {
			e[1] = "1";
			if ((b[2] < "D" && d[2] < "D") || (b[2] > "C" && d[2] > "C")) {
				e[2] = "1";
				if (b[2] - d[2] == 1 || b[2] - d[2] == 1) {
					e[3] = "1";
				}
			}
		} else {
			for (int i = 1; i <= 3; i++) {
				e[i] = "0";
			}
		}
	} else {
		for (int i = 1; i <= 3; i++) {
			e[i] = "0";
		}
	}

} else {
	for (int i = 0; i <= 3; i++) {
		e[i] = "0";
	}
}

for (int i = 0; i <= 3; i++) {
cout << e[i];
}
return 0;
)