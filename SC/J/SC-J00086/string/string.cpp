#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
#define ll long long
ll n, a, sum, ans;
string s, c;
ll read() {
	ll f = 1, res = 0;
	char ch = getchar();
	while (!isdigit(ch)) {
		if (ch == '-') f = -1;
		ch = getchar();
	}
	while (isdigit(ch)) {
		res = res * 10 + ch - '0';
		ch = getchar();
	}
	return f*res;
}
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (ll i = 1; i <= n; i++) {
		cin >> a >> c;
		sum += a;
		for (ll i = 1; i <= a; i++) {
			s += c;
		}
	}
	long long p1 = 0, p2 = s.size() - 1;
	while (p1 <= p2) {
		if (s[p1] != s[p2]) ans++;
		p1++;
		p2--;
	}
	cout << ans;
	return 0;
}