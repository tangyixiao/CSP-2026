#include <bits/stdc++.h>
using namespace std;
string a;
int b;
char C;
string d;
int e;
char f;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> a >> b >> C >> d >> e >> f;
	if (a == d) {
		cout << 1;
		if (b == e) {
			cout << 1;
			if ((f == 'A' && C == 'B') || (f == 'A' && C == 'C') || (f == 'B' && C == 'A') || (f == 'B' && C == 'C') || (f == 'C'
			        && C == 'A') || (f == 'C' && C == 'B') || (f == 'D' && C == 'F') || (f == 'F' && C == 'D')) {
				cout << 1;
				if ((f == 'A' && C == 'B') || (f == 'B' && C == 'A') || (f == 'B' && C == 'C') || (f == 'C' && C == 'B') || (f == 'D'
				        && C == 'F') || (f == 'F' && C == 'D')) {
					cout << 1;
				} else {
					cout << 0;
				}
			} else {
				cout << 0;
			}
		} else {
			cout << 0;
		}
	}
	return 0;
}
