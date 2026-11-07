#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[200005];
int sum = 0;
int b[200005];

void aand (int k, int pla, int c) {

//	int maxl = 0;
//	int j;
	for (int i = pla; i <= ( n - m + k) ; i++) {
//		j = (a[i] & c);
		if (k == m) {
			b[sum] = (a[i] & c);
			sum++;
//			maxl = max(maxl, j);
//			b[sum] = maxl;
//			sum++;
		}

		else {
			aand(k + 1, pla + 1, (a[i] & c));
//			maxl = max(maxl, aand (k + 1, pla + 1, j));
//			b[sum] = maxl;
//			sum++;
		}

	}
//	return maxl;
	return;
}

int main() {
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdin);
	cin >> n >> m;
	int maxl = INT_MIN;
	for (int i = 0; i < n; i++)
		cin >> a[i];
//	aand (1, 0, INT_MAX);
//	maxl = aand (1, 0, INT_MAX);
	aand (0, 0, INT_MAX);
//	cout << maxl << endl;
	for (int i = 0; i < sum; i++) {
		if (b[i] > maxl)
			maxl = b[i];
	}
	cout << maxl;
	//for (int i = 0; i < sum; i++)
//		cout << b[i] << " ";
}
