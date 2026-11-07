#include <bits/stdc++.h>
using namespace std;
long long n, num[200001], sum = 0, mid = 0, c = 0;
char a[200001];
string b[200001];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i] >> a[i];
		for (int j = sum; j < sum + num[i]; j++) {
			b[j] = a[i];
		}
		sum += num[i];
	}
	mid = sum / 2;
	for (int i = 0; i <= mid; i++) {
		if (b[i] != b[sum - 1 - i]) {
			c++;
		}

	}
	cout << c;
	return 0;
}
