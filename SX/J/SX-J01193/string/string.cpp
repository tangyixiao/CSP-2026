#include <bits/stdc++.h>
using namespace std;
int n;
int a[100000];
char c[100000];

string b[100000];


int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		for (int j = a[i - 1]; j >= 1; j--) {
			b[j + 1] += c[j];
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << b[i];
	}

	return 0;
}

