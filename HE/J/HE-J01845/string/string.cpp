#include <bits/stdc++.h>
using namespace std;
int a[200005];
char c[200005];
string s;
string t;
int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w" ,stdout);
	int n;
	cin >> n;
	for (int i = 0 ; i < n; i++) {
		cin >> a[i] >> c[i];
	}
	long long k = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < a[i]; j++) {
			s[k] = c[i];
			t[k] = s[k];
			k++;
		}
	}
	long long sum = 0;
	for (int i = 0; i < k / 2; i++) {
		swap(s[i],s[k - 1- i]);
	}
	
	for (int i = 0; i < k; i++) {
		if (s[i] != t[i]) {
			sum++;
		}
	}
	cout << sum / 2;
	return 0;
}

