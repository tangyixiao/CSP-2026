#include <bits/stdc++.h>
using namespace std;
long long M, A, R[200005], E = 0, T = 0, U = 0;

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	cin >> M >> A >> E >> T;
	U = E &T;
	cout << U;
}
