#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	int a[n + 3] = {0};
	char b[n + 3] = {'0'}; //a数目b字母
	long long sum = 0; //改变的数目总和

	for (int i = 1; i <= n; i++) {
		cin >> a[i] >> b[i];
	}//输入

	for (int i = 1; i <= n / 2; i++) {
		int l = i, r = n + 1 - i;
		if (a[l] == a[r] && b[l] != b[r]) {
			b[l] = b[r];
			sum += a[l];
		}//数目相同字母不同
		else if (a[l] != a[r] && b[l] == b[r]) {
			if (a[l] > a[r]) {
				int ls = a[l] - a[r];
				a[l] -= ls;
				a[l + 1] += ls;
			}//l大
			else {
				int ls = a[r] - a[l];
				a[r] -= ls;
				a[r - 1] += ls;
			}//r大
		}//数目不同字母相同
		else {
			if (a[l] > a[r]) {
				int ls = a[l] - a[r];
				if (l + 1 == r) {
					sum += a[min(a[l], a[r])];
					break;
				}
				sum += a[l];
				b[l] = b[r];
				a[l] -= ls;
				a[l + 1] += ls;
			}//l大
			else {
				int ls = a[r] - a[l];
				if (l + 1 == r) {
					sum += a[min(a[l], a[r])];
					break;
				}
				sum += a[r];
				b[r] = b[l];
				a[r] -= ls;
				a[r - 1] += ls;
			}//r大
		}//都不相同
		//for (int j = 1; j <= n; j++) {
		//	cout << a[i] << " " << b[i] << " " ;
		//}
		//cout << sum << endl; //
	}
	cout << sum;



	return 0;
}