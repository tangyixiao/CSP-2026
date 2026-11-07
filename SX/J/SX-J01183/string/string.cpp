#include <bits/stdc++.h>
using namespace std;

struct N {
	long long  a;
	char c;
};
N S[10000000];
N S1[10000000];

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long  n;
	cin >> n;
	for (long long i = 1; i <= n; i++) {
		cin >> S[i].a >> S[i].c;
	}
	for (long long i = 1; i <= n; i++) {
		S1[i].a = S[n + 1 - i].a;
		S1[i].c = S[n + 1 - i].c;
	}
	long long i = 1;
	char n_c = S[1].c, n_c1 = S1[1].c;
	long long n_i = 1, n_i1 = 1;
	long long n_a = S[1].a, n_a1 = S1[1].a;
	long long num = 0;
	while (n_i <= n) {
		if (n_c != n_c1) {
			num++;
		}
		i++;
		if (i > n_a) {
			n_i++;
			n_c = S[n_i].c;
			n_a += S[n_i].a;
		}
		if (i > n_a1) {
			n_i1++;
			n_c1 = S1[n_i1].c;
			n_a1 += S1[n_i1].a;
		}
	}
	cout << num / 2;

	fclose(stdin);
	fclose(stdout);
	return 0;
}