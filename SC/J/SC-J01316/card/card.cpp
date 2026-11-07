#include <bits/stdc++.h>
using namespace std;
const int N = 5 * 1e5 + 5, M = 3 * 1e5 + 5;
int A[N], Ans[M];
int main(){
	ios::sync_with_stdio(false), tie(cin);
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> A[i];
	for (int i = 1; i <= n; i++) {
		int C[m + 5] = {0};
		stack<int> Q;
		for (int j = i - 1; j < n; j++) {
			C[A[j]]++;
			if (C[A[j]] >= 2) {
				C[A[j]] = 0;
				while (Q.top() != A[j]) {
					cout << Q.top() << " ";
					Q.pop();
				}
				Q.pop();
				cout << "\n";
			}
			Q.push(A[j]);
		}
		cout << i << ":\n";
		while (!Q.empty()) {
			cout << Q.top() << " ";
			Ans[Q.top()]++;
			Q.pop();
		}
		cout << "\n\n";
	}
	for (int i = 1; i <= m; i++) cout << Ans[i] << " ";
	return 0;
	fclose(stdin);
	fclose(stdout);
}