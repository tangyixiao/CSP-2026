#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;

	long long sum = 0, sum1 = 0, cs = 0; //csΩªªª¥Œ ˝,sum1÷’÷π
	long long n1[n + 3];
	char c1[n + 3];
	int r = n, l = 1;

	for (int i = 1; i <= n; i++) {
		cin >> n1[i] >> c1[i];
		//	cout << n1[i] << ' ' << c1[i] << endl;
		sum += n1[i];
	}
	sum1 = sum / 2;
//	cout << sum << ' ' << sum1 << endl << 'J';
	for (int i = 1; sum1 > 0; i++) {

		//	if(c1[l]!=c1[r])
		if (l == r)
			break;
		if (sum1 <= min(n1[l], n1[r])) {
			if (c1[l] != c1[r]) {
				cout << l << r;
				cs += sum1;
				//	cout << 'X';
			}

			break;
		}
		if (n1[l] > n1[r]) {
			if (c1[l] != c1[r])
				cs += n1[r];

			n1[l] -= n1[r];
			sum1 -= n1[r];
			n1[r] = 0;
			r--;

		} else {
			if (n1[l] < n1[r]) {
				if (c1[l] != c1[r])
					cs += n1[l];
				n1[r] -= n1[l];
				sum1 -= n1[l];
				n1[l] = 0;
				l++;

			} else {
				if (n1[l] == n1[r]) {
					if (c1[l] != c1[r])
						cs += n1[r];
					sum1 -= n1[r];
					n1[l] = 0;
					n1[r] = 0;

					l++;
					r--;


				}
			}
		}



	}
	cout << cs;
	return 0;
}
