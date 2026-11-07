#include<bits/stdc++.h>
using namespace std;
//longlong i[1005];
char s1[100005], sum = 0, a[10000000005];

int main () {
	int n;
	cin >> n;
	char x;
	for (int i = 1; i <= n; i++) {
		cin >> s1[i] >> x;
		for (int j = i + 1; j <= s1[i]; j++) {
			a[j] = x;
		}
		i += s1[i];
	}
	for (int i = 1; i <= 1 / a[i]; i++) {
		if (a[i] = (i + 1); i <= i / 2) {
			sum++;
		}
	}
	cout << sum;


	return 0;
}
