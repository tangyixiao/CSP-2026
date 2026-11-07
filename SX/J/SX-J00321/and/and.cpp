#include <bits/stdc++.h>
using namespace std;

//struct a {
//	int a;
//};

long long n, a, cnt = 0, ant = 0;
string c, s;

int main() {

	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a >> c;
		cnt += a;
		for (int j = 1; j <= a; j++) {

			s += c;
		}
	}


	if (cnt % 2 == 0) {
		for (int i = 0; i <= cnt / 2 ; i++) {
			//cout << "c:" << cnt << endl;
			int j = cnt - 1;
			if (s[i] != s[j]) {

				//	cout << "  " << "1:" << s[i] << " 2:" << s[j] << " " << cnt << endl;
				ant++;
			}
			j--;
		}
	} else {
		for (int i = 0; i <= cnt / 2; i++) {
			//cout << "c:" << i << endl;
			int j = cnt - 1;
			if (s[i] != s[j]) {

				//	cout << "  " << "1:" << s[i] << " 2:" << s[j] << " " << cnt << endl;
				ant++;
			}
			cnt--;
		}
	}


	cout << ant;

	return 0;
}
