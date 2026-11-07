#include <bits/stdc++.h>
using namespace std;
string hw;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	long long n;
	cin >> n;
	long long p = 0;
	long long l = 0;
	while (n--) {
		long long a;
		char c;
		cin >> a >> c;
		l += a;
		long long i;
		for (i = p; i < (p + a); i++)
			hw[i] = c;
		p = i ;
	}
	long long ll;
	if (l % 2 == 0)
		ll = l / 2;
	else
		ll = l / 2 + 1;
	long long sum = 0;
	int j = 0;
	for (long long i = l - 1; i >= ll; i--) {
		if (hw[i] != hw[j])
			sum++;
		j++;
	}
	cout << sum << endl;
	return 0;
}