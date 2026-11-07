#include <bits/stdc++.h>
using namespace std;

long long a[200005];
string b[200005];

long long getlength(long long n) {
	long long ans = 0;
	ans += a[n];
	return ans;
}

string getstring(long long x, long long n) {
	for (int i = 1; i <= n; i++) {
		if (x < a[i])
			return b[i];
	}
	return "";
}


int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n;
	cin >> n;
	long long aptr = 1;
	a[0] = 0;
	for (long long i = 1; i <= n; i++) {
		long long x;
		string y;
		cin >> x;
		cin >> y;
		b[aptr] = y;
		a[aptr] = x + a[i - 1];
		aptr++;
	}
	n = getlength(n);
	long long ptr = n / 2 + (n % 2);
	long long ans = 0;
	for (long long i = ptr; i < n; i++) {
		long long j = n - i - (n % 2);
		//cout << i << " " << j << endl;
		if (getstring(i, n) != getstring(j, n))
			ans++;
	}
	cout << ans;
	return 0;
}
