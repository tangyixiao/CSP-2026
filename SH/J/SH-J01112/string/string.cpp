#include <bits/stdc++.h>
using namespace std;
string s;
long long a[200010] = {};
long long ans = 0;
int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	for (int i=0; i<n; i++)
		cin >> a[i] >> s[i];
	string str;
	long long l=0;
	for (int i=0; i<n; i++) {
		for (int j=0; j<a[i]; j++)
			str += s[i];
		l+=a[i];
	}
	for (long long i=0; i<l/2+l%2; i++)
		if (str[i] != str[l-i-1])
			ans++;
	cout << ans << endl; 
	return 0;
}
