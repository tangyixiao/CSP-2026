#include <bits/stdc++.h>
using namespace std;
int n, a;
long long d;

struct sb {
	long long number;
	string id;
} s[200010];;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	a = n / 2;
	for (int i = 0; i < n; i++) {
		cin >> s[i].number >> s[i].id;
	}
	int x = n - 1;
	for (int i = 0; i < a;) {
		if (s[i].id != s[x].id) {
			if (s[i].number >= s[x].number) {
				d += s[x].number;
				s[i].number -= s[x].number;
				x--;
			} else {
				d += s[i].number;
				s[x].number -= s[i].number;
				i++;
			}
		} else {
			if (s[i].number >= s[x].number) {
				s[i].number -= s[x].number;
				x--;
			} else {
				s[x].number -= s[i].number;
				i++;
			}
		}
		if (s[i].number == 0) {
			i++;
		}
	}
	cout << d;
	return 0;
}