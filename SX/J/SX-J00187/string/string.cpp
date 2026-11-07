#include <bits/stdc++.h>
using namespace std;
long long int sum = 0, ci = 0;

string s = "";

long long int check(string a) {
	long long int l = s.size();
	long long int d = 0;
	for (long long int i = 0; i < ceil(l * 1.0 / 2); i++) {
		if (a[i] == a[l - 1 - i])
			d++;

	}
	return d;
}

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long int n;
	cin >> n;
	for (long long int i = 0; i < n; i++) {
		long long int a;
		string x;
		cin >> a >> x;
		sum += a;
		for (int j = 0; j < a; j++) {
			s += x;
		}
	}
	long long int l = s.size();
	ci = ceil(l * 1.0 / 2) - check(s);
	//cout << check(s, sum) << ' ' << ceil(sum * 1.0 / 2);

	cout << ci;
	return 0;
}
