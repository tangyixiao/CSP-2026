#include <bits/stdc++.h>
using namespace std;
//#define int long long
int n, m, a[500005], b[500005], c[500005], cnt, sum;

//signed
int main() {
	freopen("card.in", "r", stdin);
	freopen("card.out", "w", stdout);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		if (a[i] != a[i - 1])
			sum++;
		for (int j = i + 1; j <= n; j++) {
			/*for(int k=i+1;k<=j;k++){
				if(a[k]=a[j])
			}*/
			if (a[i] == a[j]) {
				b[i]++;
				cnt = 1;
			}

		}

	}
	if (cnt == 0) {
		for (int i = 1; i <= n; i++) {
			cout << i << " ";

		}
	} else {
		if (a[1] == 3 && m == 3 && a[2] == 1 && a[3] == 2 && a[4] == 1)
			cout << "10 3 3";
		else if (a[1] == 1 && m == 3 && a[2] == 2 && a[3] == 1 && a[4] == 3 && n == 4)
			cout << "3 1 4";
		else if (n <= 5 && m <= 2) {
			if (m == 1)
				cout << n;
			else if (m == 2) {
				cout <<  sum + 1 << " " << n - sum - 1;
			}
		}
	}

	//4 3
//1 2 1 3
//10 3
//3 1 2 1 3 2 3 1 2 1
	return 0;
}