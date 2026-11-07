#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int a[200005] = {};
char c[200005] = {};

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	long long length = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> c[i];
		length+=a[i];
	}
	long long cnt = 0;
	long long ki = 1, kj = n, i1 = a[1], j1 = a[n];
	for (int i=1,j=length; i<length/2||j>length/2; i++,j--) {
		if (i - i1 > 1      - 1) {
			ki++;
			i1+=a[ki];
		}
		if (j + j1 < length + 1) {
			kj--;
			j1+=a[kj];
		}
		if (c[ki] != c[kj]) cnt++;
	}
	cout << cnt;
	return 0;
}
