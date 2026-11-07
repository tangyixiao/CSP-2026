#include <bits/stdc++.h>
using namespace std;

bool cmp(long long a, long long b) {
	return a > b;
}
vector<long long>s;
long long r;
int n, m;
int a[200000];

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			s.push_back(a[i]&a[j]);
		}
	}
	sort(s.begin(), s.end(), cmp);
	for (int i = 0; i < m; i++) {
		r += s[i];
	}
	cout << r;
	return 0;
}