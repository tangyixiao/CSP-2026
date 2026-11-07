#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 200005;
int a[N];
char b[N];
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	/*
	string s;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		for (int j = 0; j < a[i]; j++) {
			s += b[i];
		}
	}
	bool is = 0;
	int tot = 0;
	for (int i = 0; i < ((s.size() % 2 == 0) ? (s.size() / 2) : ((s.size() + 1) / 2)); i++) {
		if(s[i] != s[s.size() - 1 - i]) {
			is = 1;
			tot++;
		}
	}
	cout << tot;
	*/
	ll aa = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		aa += a[i];
	}
	ll l = 0, r = n - 1;
	ll curx = 0, cury = a[n - 1] - 1;
	ll tot = 0;
	ll x = 2;
	ll ivy = (aa % 2 == 0) ? (aa / 2) : ((aa - 1) / 2);
	while(ivy--) {
		if(curx == a[l]) {
			l++;
			curx = 0;
		}
		if(cury == -1) {
			r--;
			cury = a[n - x] - 1;
			x++;
		}
		if(b[l] != b[r]) {
			tot++;
		}
		curx++; cury--;
	}
	cout << tot;
	return 0;
}
