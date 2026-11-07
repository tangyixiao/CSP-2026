#include<bits/stdc++.h>
using namespace std;
using LL = long long;
bool cmp(LL a, LL b) {
	return a > b;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(0);
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	LL N, M;
	cin >> N >> M;
	vector<LL> A(N);
	LL mx = -1, idn = 0;
	for (LL i = 0; i < N; i++) {
		cin >> A[i];
		if (A[i] > mx) {
			mx = A[i], idn = i;
		}
	}
	if (M == 1) {
		return cout << mx, 0;
	} else if (M == 2) {
		LL x = -1;
		for (LL h = 0; h < N; h++) {
			for (LL j = 0; j < N; j++) {
				if (h == j) continue;
				LL a = A[h] & A[j];
				x = max(x, a);
			}
		}
		return cout << x, 0;
	} else if (M == N) {
		LL x = A[0];
		for (LL i = 1; i < N; i++) x &= A[i];
		return cout << x, 0;
	} else if (M == N - 1) {
		sort(A.begin(), A.end(), cmp);
		LL x = A[0];
		for (LL i = 1; i < N - 1; i++) {
			x &= A[i];
		}
		return cout << x, 0;
	} else {
		cout << 0;
	}
	return 0;
}
//3:0011 15:1111 12:1100
//0011 0011 1111 1100
//0010 1100 1100 1100
//5 3
//31 3 1 15 7
//4 2
//3 15 12 12
//0100 0011 0010 0000