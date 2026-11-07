#include <bits/stdc++.h>
using namespace std;
string a, b;
string c, d;
int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> c >> d;
	int flag = 0;
	for (int i = 0; i < 2; i++) {
		if (a[i] == c[i]){
			continue;
		}
		flag = 1;
		cout << 0 << 0 << 0 << 0; 
		return 0;
	}
	int flagt = 0;
	if (!flag) {
		cout << 1;
		for (int i = 0; i < 2; i++) {
			if (b[i] == d[i]){
				continue;
			}
			flagt = 1;
			cout << 0 << 0 << 0;
			return 0;
		}
	}
	int fop = 0;
	if(!flagt) {
		cout << 1;
		if (b[2] >= 'A' && b[2] <= 'C' && d[2] >= 'A' && d[2] <= 'C') {
			cout << 1;
		} else if (b[2] >= 'D' && b[2] <= 'F'){
			if (d[2] >='D' && d[2] <= 'F') {
				cout << 1;
				cout << 1;
				fop = 1;
			}
		} else {
			fop = 1;
			cout << 0;
			cout << 0;
		}
	}
	if (!fop) {
		if (b[2] == 'B' || d[2] == 'B') {
			cout << 1;
		} else {
			cout << 0;
		}
	}
	return 0;
}