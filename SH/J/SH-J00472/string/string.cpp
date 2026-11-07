#include <cstdio>
#include <iostream>

using namespace std;

struct cp {
	char c;
	long long n;
};
cp mkcp(long long n, char c) {
	cp t;
	t.c = c;
	t.n = n;
	return t;
}
cp ks[200005];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	long long m, s = 0;
	char c;
	cin >> n;
	for (int i = 1; i <= n; ++i){
		cin >> m >> c;
		ks[i] = mkcp(m, c);
	}
	for (int i = 1; i <= n; ++i){
		s += ks[i].n;
	}
	char* cc = new char[s+5];long long cur=1;
	for (int i = 1; i <= n; ++i){
		for (int j = 1; j <= ks[i].n; ++j){
			cc[cur] = ks[i].c; cur++;
		}
	}
	long long mid = (s + 1) / 2, ans = 0;
	for (int i = 1; i <= mid; ++i) {
		if (cc[i] != cc[cur - i]) ans++;
	}
	cout << ans << endl;
	return 0;
}
