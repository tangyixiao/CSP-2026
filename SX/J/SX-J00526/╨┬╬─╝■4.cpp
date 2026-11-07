#include <bits/stdc++.h>
using namespace std;
char a[10000000000000005];
long long sl[10000000000005];

int main() {
	int n;
	long long l = 0, step = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		char s;
		cin >> sl[i] >> s;
		for (int j = l + 1; j <= sl[i]; j++) {
			a[j] = s;
		}
		l += sl[i];
	}
	for (int i = 1; i <= l; i++){
		
	}
		cout << step;
	return 0;
}
