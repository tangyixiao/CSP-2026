#include <bits/stdc++.h>
using namespace std;
int n, sum;
int r = 0;
string s;

struct z {
	int g;
	char as;
} a[10000005];

int main() {
	freopen("string4.in", "r", stdin);
	//freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].g >> a[i].as;
		r += a[i].g;
	}
	int x = 1, y = 1;
	for (int j = 0; j < r; j++) {
		s[j] = a[x].as;
		if (y >= a[x].g) {
			x++;
			y = 0;
		}
		y++;
	}
	for (int i = 0, j = r - 1; i < r / 2 && j > r / 2; i++, j--) {
		if (s[i] != s[j]) {
			sum += 1;
		}
	}
	cout << sum;
	return 0;
}
