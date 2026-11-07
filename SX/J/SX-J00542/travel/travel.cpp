#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	string R, X, a, b;
	cin >> a >> R >> b >> X;
	int sum1 = 0, sum2 = 0, j = 0;
	sum1 = (a[0] - '0') * 10 + (a[1] - '0');
	sum2 = (b[0] - '0') * 10 + (b[1] - '0');
	if (sum1 == sum2)
		cout << 1;
	else {
		cout << 0;
		j = 1;
	}
	sum1 = (R[0] - '0') * 10 + (R[1] - '0');
	sum2 = (X[0] - '0') * 10 + (X[1] - '0');
	if (sum1 == sum2 && j == 0)
		cout << 1;
	else {
		cout << 0;
		j = 1;
	}
	sum1 = (R[2] - 'A');
	sum2 = (X[2] - 'A');
	if (((sum1 >= 0 && sum1 <= 2 && sum1 >= 0 && sum1 <= 2) || (sum1 >= 3 && sum1 <= 4 && sum1 >= 3 && sum1 <= 4))
	        && j == 0)
		cout << 1;
	else {
		cout << 0;
		j = 1;
	}

	if ((sum1 + 1 == sum2 || sum1 - 1 == sum2) && j == 0)
		cout << 1;
	else
		cout << 0;
	return 0;
}


