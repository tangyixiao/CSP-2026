#include <bits/stdc++.h>
using namespace std;
char a[2], aa[3], b[2], bb[3];
bool f = 1;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	for (long long i = 0; i < 2; i++) {
		cin >> a[i];
	}
	for (long long i = 0; i < 3; i++) {
		cin >> aa[i];
	}
	for (long long i = 0; i < 2; i++) {
		cin >> b[i];
	}
	for (long long i = 0; i < 3; i++) {
		cin >> bb[i];
	}
	if (a[0] == b[0] && a[1] == b[1])
		cout << 1;
	else {
		f = 0;
		cout << 0;
	}
	if (aa[0] == bb[0] && aa[1] == bb[1] && f == 1)
		cout << 1;
	else {
		f = 0;
		cout << 0;
	}
	if (aa[2] <= 'C' && bb[2] <= 'C' && f == 1)
		cout << 1;
	else if (aa[2] >= 'D' && bb[2] >= 'D' && f == 1)
		cout << 1;
	else {
		f = 0;
		cout << 0;
	}
	if (abs(aa[2] - bb[2]) == 1 && f == 1)
		cout << 1;
	else
		cout << 0;
	return 0;
}
