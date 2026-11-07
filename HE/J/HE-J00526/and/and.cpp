#include <bits/stdc++.h>
using namespace std;
long long n, m, A[200005];
bool cmp(long long a, long long b) {
	return a < b;
}
int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> A[i];
	}
	sort(A+1, A+n+1, cmp);
	long long yu = A[n];
	for (int i = n; i >= n-m+1; i--) {
		yu &= A[i];
	}
	A[n-1] &= A[n];
	cout << A[n-1];
	return 0;
}
