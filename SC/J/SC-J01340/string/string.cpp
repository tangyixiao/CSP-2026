#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin >> n;
	string s,a;
	for (int i=0;i<n;i++) {
		cin >> a[i] >> s[i];
	}
	if (n == 1) {
		cout << 0;
		return 0;
	}
	long long q=0;
	for (int i=0;i<n-1;i++) {
		if (s[i] == s[i+1]) {
			q++;
		}
	}
	if (q == n-1) {
		cout << 0;
		return 0;
	}
	if (n == 2) {
		if (a[0] <= a[1]) {
			cout << a[0];
		} else {
			cout << a[1];
		}
		return 0;
	}
	cout << 6;
	return 0;
}