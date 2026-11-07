#include <bits/stdc++.h>
using namespace std;
int n, a[200020];
char c[200020];
int guo = 0, gai;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> c[i];
	}
//	for (int i = 0; i < n; i++) {
//		cout << a[i] << " ";
//	}
//	cout << n << endl;
	int i = 0;
	int j = n - 1;
	while (guo < n) {
		//	cout << a[i] << " " << a[j] << " " << i << " " << j << " " << c[i] << " " << c[j] << endl;
		//cout << 3498;
		if (c[i] == c[j]) {
			//	cout << 93;
			if (a[i] > a[j]) {
				a[i] -= a[j];
				a[j] = 0;
				guo++;
				j--;
			} else 	if (a[i] < a[j]) {
				a[j] -= a[i];
				a[i] = 0;
				guo++;
				i++;
			} else 	if (a[i] == a[j]) {
				guo += 2;
				a[i] = 0;
				a[j] = 0;
				j--;
				i++;
			}
		} else {
			if (a[i] > a[j]) {
				//	cout << a[j] << " ";
				a[i] -= a[j];

				guo++;
				gai += a[j];
				a[j] = 0;

				j--;

			} else 	if (a[i] < a[j]) {
				//	cout << a[i] << " ";
				a[j] -= a[i];

				guo++;
				gai += a[i];
				a[i] = 0;

				i++;

			} else 	if (a[i] == a[j]) {
				//	cout << a[i] << " " ;
				//	cout << a[i] << " " << a[j] << " " << i << " " << j << " " << c[i] << " " << c[j] << endl;
				guo += 2;
				gai += a[i];
				a[j] = 0;
				a[i] = 0;

				j--;
				i++;

			}
		}
	}
	cout << gai;
	return 0;
}
