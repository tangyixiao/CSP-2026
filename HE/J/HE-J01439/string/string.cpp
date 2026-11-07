#include <bits/stdc++.h>
using namespace std;
int main () {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n;
	cin >> n;
	long long number[200005];
	char letter[200005];
	for (long long i = 0; i < n; i++) {
		cin >> number[i] >> letter[i];
	}
	char a[200005];
	long long k = 0;
	for (long long i = 0; i < n; i++) {
		for (long long j = 0; j < number[i]; j++) {
			a[k] = letter[i];
			k++;
		}
	}
	long long sum = 0;
	for (long long i = 0; i < k / 2; i++) {
		if (a[i] != a[k - i - 1]) {
			sum++;
		}
	}
	cout << sum;
	return 0;
} 
